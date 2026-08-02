"""
Diagnostic round 2 : autocorrélation pour confirmer le baud rate,
+ test PSK (sauts de phase) en plus de ASK/FSK, sur le signal BRUT
(sans bandpass, puisque le PSD ne montre pas de porteuse isolée).
"""

import numpy as np
from scipy.io import wavfile
from scipy.signal import hilbert
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt

FILENAME = "audio.wav"
BAUD_GUESS = 2400
sr, data = wavfile.read(FILENAME)
data = data.astype(np.float32)
data -= data.mean()

# ---------------------------------------------------------
# 1. Autocorrélation de l'enveloppe pour retrouver le vrai
#    période symbole (au cas où 48000/2400=20 ne soit pas exact)
# ---------------------------------------------------------
analytic = hilbert(data)
envelope = np.abs(analytic)
env_ac = envelope - envelope.mean()

# autocorrélation sur les 5 premières secondes
seg = env_ac[:5*sr]
ac = np.correlate(seg, seg, mode="full")
ac = ac[len(ac)//2:]
ac = ac[:500]  # on regarde les 500 premiers lags (~10ms à 48kHz)

fig, ax = plt.subplots(figsize=(12,4))
ax.plot(ac)
ax.set_title("Autocorrélation de l'enveloppe (cherche un pic périodique = vrai symbole)")
ax.set_xlabel("Lag (samples)")
plt.tight_layout()
plt.savefig("autocorr.png", dpi=130)
print("-> autocorr.png sauvegardé")

# affiche les pics locaux les plus forts (hors lag=0)
from scipy.signal import find_peaks
peaks, _ = find_peaks(ac[5:], height=ac.max()*0.1)
peaks += 5
print("Lags des pics principaux (samples):", peaks[:10])
print("Ce qui correspond a des baud rates de :", [f"{sr/p:.1f}" for p in peaks[:10] if p > 0])

# ---------------------------------------------------------
# 2. Test PSK : dérivée de phase (hors zones de transition,
#    la phase devrait etre stable ; aux transitions, saut net)
# ---------------------------------------------------------
phase = np.unwrap(np.angle(analytic))
# phase "locale" = phase - tendance lineaire (retire la porteuse constante)
from scipy.signal import detrend
phase_detrend = detrend(phase[:5*sr])

fig, ax = plt.subplots(figsize=(14,4))
ax.plot(phase_detrend[:2000])
ax.set_title("Phase détendue (cherche des sauts nets réguliers = PSK)")
plt.tight_layout()
plt.savefig("phase_check.png", dpi=130)
print("-> phase_check.png sauvegardé")

# ---------------------------------------------------------
# 3. Spectrogramme très zoomé en temps ET frequence, sur 200ms
#    pour VOIR à l'oeil nu le pattern de modulation
# ---------------------------------------------------------
from scipy.signal import spectrogram
seg2 = data[:int(0.3*sr)]  # 300ms
f, t, Sxx = spectrogram(seg2, sr, nperseg=256, noverlap=240)
Sxx_db = 10*np.log10(Sxx + 1e-10)

fig, ax = plt.subplots(figsize=(14,6))
mask = f < 6000
ax.pcolormesh(t*1000, f[mask], Sxx_db[mask], shading="auto", cmap="viridis")
ax.set_xlabel("Temps (ms)")
ax.set_ylabel("Fréquence (Hz)")
ax.set_title("Spectrogramme très zoomé (300ms) - pattern visuel de la modulation")
plt.tight_layout()
plt.savefig("spectro_microzoom.png", dpi=150)
print("-> spectro_microzoom.png sauvegardé")
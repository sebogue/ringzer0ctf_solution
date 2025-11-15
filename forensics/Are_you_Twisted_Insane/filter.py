import noisereduce as nr
import soundfile as sf
import numpy as np
from scipy.signal import butter, lfilter

y, sr = sf.read("voice_isolated.wav")
if y.ndim > 1:
    y = np.mean(y, axis=1)

# 1. Filtre passe-bande (300–3400 Hz = bande de la voix humaine)
def bandpass(data, lowcut=300.0, highcut=3400.0, fs=44100, order=4):
    nyq = 0.5 * fs
    low = lowcut / nyq
    high = highcut / nyq
    b, a = butter(order, [low, high], btype="band")
    return lfilter(b, a, data)

y = bandpass(y, fs=sr)

# 2. Réduction de bruit adaptative
reduced = nr.reduce_noise(y=y, sr=sr, prop_decrease=1.0, stationary=False)

sf.write("voice_cleaned.wav", reduced, sr)
print("=> voice_cleaned.wav prêt")
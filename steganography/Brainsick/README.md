J'ai cherché avec strings dans l'image

strings if=5411333e505440020a1799da6071851b.gif | grep flag

On voit flag.gif

Intéressant ...

En essayant ensuite un simple binwalk pour extraire le flag.git on obtient une erreur

binwalk -e 5411333e505440020a1799da6071851b.gif

[2025-11-19T06:00:01Z ERROR binwalk::extractors::common] Failed to execute command unrar["x", "-y", "Brainsick/extractions/5411333e505440020a1799da6071851b.gif.extracted/131DD/rar_131DD.rar"]: No such file or directory (os error 2)
[2025-11-19T06:00:01Z ERROR binwalk::extractors::common] Failed to spawn external extractor for 'rar' signature: No such file or directory (os error 2)

---------------------------------------------------------------------------------------------------------
DECIMAL                            HEXADECIMAL                        DESCRIPTION
---------------------------------------------------------------------------------------------------------
0                                  0x0                                GIF image, 440x385 pixels, total 
                                                                      size: 78301 bytes
78301                              0x131DD                            RAR archive, version: 4, total 
                                                                      size: 78577 bytes
---------------------------------------------------------------------------------------------------------
[#] Extraction of gif data at offset 0x0 declined
[-] Extraction of rar data at offset 0x131DD failed!
---------------------------------------------------------------------------------------------------------


Mais au moins je sais que j'ai un rar et je connais son offset donc on fait la commande suivante:
dd if=5411333e505440020a1799da6071851b.gif of=flag.rar bs=1 skip=78301

On peut ensuite faire unar flag.rar et on obtient une image avec le flag
FLAG-Th2K4s83uQh9xA
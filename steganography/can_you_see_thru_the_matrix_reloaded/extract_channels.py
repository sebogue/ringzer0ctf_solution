import struct
import zlib
from PIL import Image

def extract_png_data(filename):
    with open(filename, 'rb') as f:
        # Vérifie la signature PNG
        signature = f.read(8)
        if signature != b'\x89PNG\r\n\x1a\n':
            print("Pas un PNG valide!")
            return
        
        # Lit les chunks
        idat_data = b''
        width = height = 0
        
        while True:
            try:
                # Lit la longueur du chunk
                length_bytes = f.read(4)
                if len(length_bytes) < 4:
                    break
                    
                length = struct.unpack('>I', length_bytes)[0]
                chunk_type = f.read(4)
                chunk_data = f.read(length)
                crc = f.read(4)
                
                print(f"Chunk: {chunk_type.decode('ascii', errors='ignore')}, Length: {length}")
                
                # Récupère les dimensions depuis IHDR
                if chunk_type == b'IHDR':
                    width = struct.unpack('>I', chunk_data[0:4])[0]
                    height = struct.unpack('>I', chunk_data[4:8])[0]
                    print(f"  Dimensions: {width}x{height}")
                
                # Collecte toutes les données IDAT
                if chunk_type == b'IDAT':
                    idat_data += chunk_data
                    
            except Exception as e:
                print(f"Erreur: {e}")
                break
        
        print(f"\nTotal IDAT data: {len(idat_data)} bytes")
        
        # Essaie de décompresser
        try:
            decompressed = zlib.decompress(idat_data)
            print(f"Décompressé: {len(decompressed)} bytes")
            
            # Sauvegarde les données brutes
            with open('raw_image_data.bin', 'wb') as out:
                out.write(decompressed)
            print("✓ Données sauvegardées: raw_image_data.bin")
            
            return width, height, decompressed
            
        except zlib.error as e:
            print(f"Erreur de décompression: {e}")
            # Essaie quand même de sauver les données
            with open('idat_compressed.bin', 'wb') as out:
                out.write(idat_data)
            print("✓ Données IDAT sauvegardées: idat_compressed.bin")

extract_png_data('file.png')




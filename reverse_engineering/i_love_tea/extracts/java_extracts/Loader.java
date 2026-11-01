import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Loader extends ClassLoader {
   public static byte[] decrypt(byte[] encrypted, byte[] key) {
      int keylen = key.length;
      byte[] S = new byte[256];
      byte[] T = new byte[256];

      for(int i = 0; i < 256; ++i) {
         S[i] = (byte)i;
         T[i] = key[i % keylen];
      }

      int j = 0;

      for(int i = 0; i < 256; ++i) {
         j = j + S[i] + T[i] & 255;
         byte tmp = S[j];
         S[j] = S[i];
         S[i] = tmp;
      }

      byte[] ciphertext = new byte[encrypted.length];
      int i = 0;
      j = 0;

      for(int counter = 0; counter < encrypted.length; ++counter) {
         i = i + 1 & 255;
         j = j + S[i] & 255;
         byte tmp = S[j];
         S[j] = S[i];
         S[i] = tmp;
         int t = S[i] + S[j] & 255;
         int k = S[t];
         ciphertext[counter] = (byte)(encrypted[counter] ^ k);
      }

      return ciphertext;
   }

   public Class loadClass() {
      try {
         byte[] key = "yaik0aiNgoo7angu".getBytes();
         Path file = Paths.get("./encrypted.class");
         byte[] encrypted = Files.readAllBytes(file);
         byte[] decrypted = decrypt(encrypted, key);
         return this.defineClass("PasswordValidator", decrypted, 0, decrypted.length);
      } catch (Exception var5) {
         return null;
      }
   }
}
import re
import random

def shuffle_alphabet(alphabet, plaintext_char):
    """Shuffle alphabet around the plaintext character"""
    normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    index = normal.index(plaintext_char.upper())
    return alphabet[index:] + alphabet[:index]

def encrypt_with_key(plaintext, initial_key):
    """Encrypt plaintext using initial key and shuffling"""
    normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    current_key = initial_key
    ciphertext = ""
    
    for plain_char in plaintext:
        plain_index = normal.index(plain_char.upper())
        cipher_char = current_key[plain_index]
        ciphertext += cipher_char
        current_key = shuffle_alphabet(current_key, plain_char)
    
    return ciphertext

def decrypt_with_key(ciphertext, initial_key):
    """Decrypt ciphertext using initial key and shuffling"""
    normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    current_key = initial_key
    plaintext = ""
    
    for cipher_char in ciphertext:
        cipher_index = current_key.index(cipher_char)
        plain_char = normal[cipher_index]
        plaintext += plain_char
        current_key = shuffle_alphabet(current_key, plain_char)
    
    return plaintext

def score_english(text):
    """Score how English-like a text is"""
    # Common English trigrams
    common_trigrams = [
        'THE', 'AND', 'ING', 'HER', 'HAT', 'HIS', 'THA', 'ERE', 'FOR', 'ENT',
        'ION', 'TER', 'WAS', 'YOU', 'ITH', 'VER', 'ALL', 'WIT', 'THI', 'TIO'
    ]
    
    # Common English bigrams
    common_bigrams = [
        'TH', 'HE', 'IN', 'ER', 'AN', 'RE', 'ON', 'AT', 'EN', 'ND',
        'TI', 'ES', 'OR', 'TE', 'OF', 'ED', 'IS', 'IT', 'AL', 'AR'
    ]
    
    score = 0
    
    # Trigram score
    for i in range(len(text) - 2):
        if text[i:i+3] in common_trigrams:
            score += 3
    
    # Bigram score
    for i in range(len(text) - 1):
        if text[i:i+2] in common_bigrams:
            score += 2
    
    # Letter frequency (ETAOIN SHRDLU)
    freq = {'E': 12.7, 'T': 9.1, 'A': 8.2, 'O': 7.5, 'I': 7.0, 'N': 6.7,
            'S': 6.3, 'H': 6.1, 'R': 6.0, 'D': 4.3, 'L': 4.0, 'U': 2.8}
    
    for char in text:
        score += freq.get(char, 0) / 100
    
    return score

def simulated_annealing(ciphertext, known_plaintext, iterations=1000000):
    """Use simulated annealing to find the key"""
    normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    
    def fitness(key):
        """Fitness based on known plaintext match"""
        encrypted = encrypt_with_key(known_plaintext, key)
        matches = sum(1 for i in range(len(known_plaintext)) 
                     if encrypted[i] == ciphertext[i])
        return matches
    
    def neighbor(key):
        """Generate neighbor by swapping two random positions (keeping M at 0)"""
        key_list = list(key)
        i, j = random.sample(range(1, 26), 2)
        key_list[i], key_list[j] = key_list[j], key_list[i]
        return ''.join(key_list)
    
    # Start with random key (M at position 0)
    remaining = [c for c in normal if c != 'M']
    random.shuffle(remaining)
    current_key = 'M' + ''.join(remaining)
    current_fitness = fitness(current_key)
    
    best_key = current_key
    best_fitness = current_fitness
    
    temperature = 100.0
    cooling_rate = 0.9999
    
    print("🌡️  Simulated Annealing")
    print(f"   Iterations: {iterations:,}")
    print(f"   Initial fitness: {current_fitness}/{len(known_plaintext)}\n")
    
    for i in range(iterations):
        # Generate neighbor
        new_key = neighbor(current_key)
        new_fitness = fitness(new_key)
        
        # Accept or reject
        delta = new_fitness - current_fitness
        if delta > 0 or random.random() < pow(2.718, delta / temperature):
            current_key = new_key
            current_fitness = new_fitness
            
            if current_fitness > best_fitness:
                best_key = current_key
                best_fitness = current_fitness
                print(f"Iteration {i:,}: New best = {best_fitness}/{len(known_plaintext)}")
        
        if current_fitness == len(known_plaintext):
            print(f"\n🎉 PERFECT MATCH at iteration {i:,}!")
            return current_key
        
        # Cool down
        temperature *= cooling_rate
        
        if i % 100000 == 0 and i > 0:
            print(f"Iteration {i:,}: Best = {best_fitness}/{len(known_plaintext)}, Temp = {temperature:.2f}")
    
    print(f"\n❌ No perfect match found")
    print(f"   Best fitness: {best_fitness}/{len(known_plaintext)}")
    return best_key

def hill_climbing(ciphertext, known_plaintext, restarts=1000):
    """Hill climbing with random restarts"""
    normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    
    def fitness(key):
        encrypted = encrypt_with_key(known_plaintext, key)
        return sum(1 for i in range(len(known_plaintext)) 
                  if encrypted[i] == ciphertext[i])
    
    print("⛰️  Hill Climbing with Random Restarts")
    print(f"   Restarts: {restarts}\n")
    
    best_overall = (None, 0)
    
    for restart in range(restarts):
        # Random start
        remaining = [c for c in normal if c != 'M']
        random.shuffle(remaining)
        current_key = 'M' + ''.join(remaining)
        current_fitness = fitness(current_key)
        
        improved = True
        steps = 0
        
        while improved:
            improved = False
            steps += 1
            
            # Try all possible swaps
            for i in range(1, 26):
                for j in range(i + 1, 26):
                    # Swap
                    key_list = list(current_key)
                    key_list[i], key_list[j] = key_list[j], key_list[i]
                    new_key = ''.join(key_list)
                    new_fitness = fitness(new_key)
                    
                    if new_fitness > current_fitness:
                        current_key = new_key
                        current_fitness = new_fitness
                        improved = True
                        
                        if current_fitness > best_overall[1]:
                            best_overall = (current_key, current_fitness)
                            print(f"Restart {restart}: New best = {current_fitness}/{len(known_plaintext)}")
                        
                        if current_fitness == len(known_plaintext):
                            print(f"\n🎉 PERFECT MATCH!")
                            return current_key
                        
                        break
                
                if improved:
                    break
        
        if restart % 100 == 0:
            print(f"Restart {restart}: Local optimum = {current_fitness}/{len(known_plaintext)}")
    
    print(f"\n❌ No perfect match found")
    print(f"   Best fitness: {best_overall[1]}/{len(known_plaintext)}")
    return best_overall[0]

# Main execution
if __name__ == "__main__":
    ciphertext = "MHYHSQWZDWUBIOLQMXQYICZELOPOZYSNRJIDBWWTSDZGVFJCXKIYWJJVGWGILUWNJIVVBUDULYYVYLMFPFJWYRBRQCATXUBWNICUIFESTDPILLNMYDHIPKJPRICULXAZYEIOQFQQHKEFNNGOUJCOJEMGUABMVCPYXISPIUOVVPWTBNKNUUXLAXXYSTKPXFBSABNLNEQFFHYRTWAKNENSKRIFFUOUOICUXOANTAOLEDAJRYGKGBXNAJWTVLEYDSFKSIYCXRULTYEHFHRMUITAZIZKLZXA"
    known_plaintext = "ACOMPUTERPROGRAMCALLEDMAVENCANPLAYSCRABBLE"
    
    print("="*70)
    print("🔐 Optimized Cipher Solver")
    print("="*70)
    print()
    
    # Try simulated annealing
    print("Method: Simulated Annealing")
    print("-" * 70)
    result = simulated_annealing(ciphertext, known_plaintext, iterations=2000000)
    
    if result:
        encrypted_check = encrypt_with_key(known_plaintext, result)
        matches = sum(1 for i in range(len(known_plaintext)) 
                     if encrypted_check[i] == ciphertext[i])
        
        print(f"\n✅ Best key found: {result}")
        print(f"   Matches: {matches}/{len(known_plaintext)}")
        
        if matches == len(known_plaintext):
            print("\n" + "="*70)
            print("🎉 PERFECT SOLUTION - Decrypting full message...")
            print("="*70)
            plaintext = decrypt_with_key(ciphertext, result)
            print(f"\n{plaintext}\n")
            
            # Look for FLAG
            match = re.search(r'FLAG[- ]?(\d+)', plaintext)
            if match:
                print(f"🚩 FLAG: FLAG-{match.group(1)}")
            else:
                print("No FLAG pattern found in plaintext")
        else:
            print("\n⚠️  Not a perfect match, but let's see the decryption:")
            plaintext = decrypt_with_key(ciphertext, result)
            print(f"\n{plaintext[:100]}...\n")
            print("Try running again or increase iterations")
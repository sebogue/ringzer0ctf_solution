import string
import itertools

STANDARD = list(string.ascii_uppercase)

# We need to GUESS the initial alpha_0 positions for: A, C, E, G, N, O, P, R, T, U, V
# That's 11 letters to guess = 26!/(26-11)! combinations - way too many.
# 
# SMARTER: Many of these letters will be determined step by step if we guess fewer.
# After guessing A's position -> unlock steps 0, so we get alpha_0_inv[M].
# M is needed at step 3. So once we know alpha_0_inv[M], we can process step 3.
# That gives us alpha_0_inv[H] from the constraint at step 3... let's trace.
#
# Actually let's simulate the dependency chain more carefully with a recursive approach.
# 
# FINAL APPROACH: Iterative constraint propagation with guessing.
# We make the minimum number of guesses to unlock the chain.
# 
# The first letter we need to guess is A (needed at step 0).
# Once we guess alpha_0.index(A) = k_A, we unlock step 0:
#   - Learn alpha_0[0] = M (the constraint), so alpha_0_inv[M] = 0
#   - Compute perm_1
# Step 1: need C. Is C in alpha_0_inv? No. Must guess alpha_0.index(C).
# ...this becomes a sequence of guesses.
#
# BETTER: Since we have 42 known pairs (much more than 26 unknowns),
# we should be able to solve this as a system over GF(26)... but it's not linear.
#
# MOST PRACTICAL: Use backtracking with pruning.
# We greedily process as far as possible, then guess the next needed letter,
# trying all 26-filled positions. Most guesses will quickly lead to contradictions.

ciphertext_raw = (
    "MHYHSQWZDWUBIOLQMXQYICZELOPOZYSNRJIDBWWTSDZGVFJCXKIYWJJVGWGILUWNJIVVB"
    "UDULYYVYLMFPFJWYRBRQCATXUBWNICUIFESTDPILLNMYDHIPKJPRICULXAZYEIOQFQQHK"
    "EFNNGOUJCOJEMGUABMVCPYXISPIUOVVPWTBNKNUUXLAXXYSTKPXFBSABNLNEQFFHYRTWA"
    "KNENSKRFFUOUOICUXOANTAOLEDAJRYGKGBXNAJWTVLEYDSFKSIYCXRULTYEHFHRMUITAZ"
    "IZKLZXA"
)
known_pt = "A COMPUTER PROGRAM CALLED MAVEN CAN PLAY SCRABBLE."
ct_all = [c for c in ciphertext_raw.upper() if c in STANDARD]
kp_all = [c for c in known_pt.upper() if c in STANDARD]

def decrypt(ciphertext, key):
    alpha = list(key)
    result = []
    for c in ciphertext.upper():
        if c in STANDARD:
            idx = alpha.index(c)
            plain = STANDARD[idx]
            result.append(plain)
            pivot = alpha.index(plain)
            before = alpha[:pivot]
            after = alpha[pivot+1:]
            alpha = after + [alpha[pivot]] + before
        else:
            result.append(c)
    return ''.join(result)

def solve(ct, kp, alpha_0, alpha_0_inv, perm, step):
    """
    Recursively solve for alpha_0 using backtracking.
    Returns completed alpha_0 or None.
    """
    # Process as many steps as possible without guessing
    i = step
    while i < len(kp):
        p, c = kp[i], ct[i]
        
        # Constraint: alpha_0[perm[std_idx(p)]] = c
        slot = perm[STANDARD.index(p)]
        if alpha_0[slot] is None:
            if c not in alpha_0_inv:
                alpha_0[slot] = c
                alpha_0_inv[c] = slot
            elif alpha_0_inv[c] != slot:
                return None  # contradiction
        elif alpha_0[slot] != c:
            return None  # contradiction
        
        # Need alpha_0_inv[p] for shuffle
        if p not in alpha_0_inv:
            # Stuck - need to guess position of p
            used_positions = set(alpha_0_inv.values())
            for pos in range(26):
                if pos in used_positions:
                    continue
                if alpha_0[pos] is not None:
                    continue
                # Guess: alpha_0[pos] = p
                new_alpha_0 = alpha_0[:]
                new_alpha_0[pos] = p
                new_inv = alpha_0_inv.copy()
                new_inv[p] = pos
                
                # Compute pivot and advance
                pivot = perm.index(pos)
                before = perm[:pivot]
                after = perm[pivot+1:]
                new_perm = after + [perm[pivot]] + before
                
                result = solve(ct, kp, new_alpha_0, new_inv, new_perm, i + 1)
                if result is not None:
                    return result
            return None  # No valid guess
        
        pivot = perm.index(alpha_0_inv[p])
        before = perm[:pivot]
        after = perm[pivot+1:]
        perm = after + [perm[pivot]] + before
        i += 1
    
    return alpha_0

import sys
sys.setrecursionlimit(100000)

print("Solving via backtracking...")
alpha_0_init = [None] * 26
alpha_0_inv_init = {}
perm_init = list(range(26))

result = solve(ct_all, kp_all, alpha_0_init, alpha_0_inv_init, perm_init, 0)

if result:
    filled = sum(1 for x in result if x is not None)
    print(f"Recovered {filled}/26 entries")
    print(f"Partial key: {result}")
    
    # Fill remaining with any permutation and test
    remaining_letters = [l for l in STANDARD if l not in set(x for x in result if x is not None)]
    remaining_slots = [i for i, x in enumerate(result) if x is None]
    print(f"Remaining letters: {remaining_letters}")
    print(f"Remaining slots: {remaining_slots}")
    
    if len(remaining_slots) == 0:
        key = ''.join(result)
        print(f"\nKey: {key}")
        plaintext = decrypt(ciphertext_raw, key)
        print(f"Plaintext:\n{plaintext}")
    elif len(remaining_slots) <= 6:
        for perm_r in itertools.permutations(remaining_letters):
            candidate = result[:]
            for slot, letter in zip(remaining_slots, perm_r):
                candidate[slot] = letter
            pt = decrypt(ciphertext_raw, ''.join(candidate))
            # Verify known plaintext
            kp_check = ''.join(c for c in pt if c in STANDARD)[:len(kp_all)]
            if kp_check == ''.join(kp_all):
                print(f"\nKey: {''.join(candidate)}")
                print(f"Plaintext:\n{pt}")
                break
else:
    print("No solution found!")

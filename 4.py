import math

# Step 1: Choose two prime numbers
p = 7
q = 5

# Step 2: Calculate n
n = p * q
print("n =", n)

# Step 3: Calculate phi(n)
phi = (p - 1) * (q - 1)

# Step 4: Find e such that 1 < e < phi(n) and gcd(e, phi) = 1
e = 2
while e < phi:
    if math.gcd(e, phi) == 1:
        break
    else:
        e += 1
print("e =", e)

# Step 5: Calculate d such that (d * e) mod phi(n) = 1
d = pow(e, -1, phi)
print("d =", d)

# Display keys
print(f'Public key: {e, n}')
print(f'Private key: {d, n}')

# Plain text
msg = 4
print(f'Original message: {msg}')

# Encryption
C = pow(msg, e, n)
print(f'Encrypted message: {C}')

# Decryption
M = pow(C, d, n)
print(f'Decrypted message: {M}')

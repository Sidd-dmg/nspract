import math

# Step 1: Choose prime numbers
p = 3
q = 5

# Step 2: Calculate n
n = p * q
print("n =", n)

# Step 3: Calculate (phi)
phi = (p - 1) * (q - 1)

# Step 4: Find a suitable value for e
e = 2
while e < phi:
    if math.gcd(e, phi) == 1:  # Check if e and phi are coprime
        break
    else:
        e += 1
print("e =", e)

# Step 5: Calculate the private key (d)
k = 4 # Arbitrarily chosen value for k
d = ((k * phi) + 1) // e  # Calculate d using the extended Euclidean algorithm
print("d =", d)

# Display public and private keys
print(f'Public key: {e, n}')
print(f'Private key: {d, n}')

# Plain text
msg = 4
print(f'Original message: {msg}')

# Encryption
C = pow(msg, e, n)  # Ciphertext C = (msg^e) mod n
print(f'Encrypted message: {C}')

# Decryption
M = pow(C, d, n)  # Decrypted message M = (C^d) mod n
print(f'Decrypted message: {M}')

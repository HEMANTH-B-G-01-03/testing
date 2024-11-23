def generate_public_key(prime, base, pri_key):
    return pow(base, pri_key, prime)

def generate_shared_secret(pub, pri_key, prime):
    return pow(pub, pri_key, prime)

prime = int(input("Enter the large prime no:"))
base = int(input("Enter the base:"))


alice_pri = int(input("Alice enter your private key: "))
alice_pub = generate_public_key(prime, base, alice_pri)
print("Alice public key is:", alice_pub)


bob_pri = int(input("Bob enter your private key: "))
bob_pub = generate_public_key(prime, base, bob_pri)
print("BOB public key is:", bob_pub)


alice_share = generate_shared_secret(bob_pub, alice_pri, prime)
bob_share = generate_shared_secret(alice_pub, bob_pri, prime)

# Print Alice and Bob's shared secrets
print("Alice share is:", alice_share)
print("Bob share is:", bob_share)

# Check if the shared secrets match
if alice_share == bob_share:
    print("Success! The shared secret is:", alice_share)
else:
    print("Error, go man...")



/ips
61
33
2
4


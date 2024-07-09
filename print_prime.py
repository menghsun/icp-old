# Description: Print all prime numbers from 2 to 10000.
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

for num in range(2, 10001):
    if is_prime(num):
        print(num)
def solve(n):
    primes = []
    
    if n % 2 == 0:
        primes = [2] * (n // 2)
    else:
        primes = [2] * ((n - 3) // 2) + [3]
    
    print(len(primes))
    print(' '.join(map(str, primes)))

n = int(input())
solve(n)
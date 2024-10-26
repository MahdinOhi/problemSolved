import sys
import math

def lcm(x, y):
    return x * y // math.gcd(x, y)

def find_lcm_string(s, t):
    len_s = len(s)
    len_t = len(t)
    
    L = lcm(len_s, len_t)
    
    repeated_s = s * (L // len_s)
    repeated_t = t * (L // len_t)
    
    if repeated_s == repeated_t:
        return repeated_s
    else:
        return "-1"

def main():
    input = sys.stdin.read
    data = input().split()
    
    q = int(data[0])
    index = 1
    
    results = []
    for _ in range(q):
        s = data[index]
        t = data[index + 1]
        result = find_lcm_string(s, t)
        results.append(result)
        index += 2
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()

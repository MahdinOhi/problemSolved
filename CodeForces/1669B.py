def solution(numbers: list) -> int:
    numbers.sort()
    
    for i in range(len(numbers) - 2):
        if numbers[i] == numbers[i + 1] == numbers[i + 2]:
            return numbers[i]
    
    return -1

t = int(input().strip())
results = []

for _ in range(t):
    n = int(input().strip())
    numbers = list(map(int, input().strip().split()))
    result = solution(numbers)
    results.append(result)

for result in results:
    print(result)

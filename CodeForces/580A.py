def solve(arr):
    if not arr:
        return 0
    cur = 1
    max_length = 1
    for i in range(1, len(arr)):
        if arr[i] >= arr[i - 1]:
            cur += 1 
        else:
            max_length = max(max_length, cur) 
            cur = 1 
    max_length = max(max_length, cur)
    return max_length

n = int(input())
arr = list(map(int, input().split()))
print(solve(arr))

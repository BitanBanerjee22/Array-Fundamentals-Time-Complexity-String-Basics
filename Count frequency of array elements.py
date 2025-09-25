n = int(input())
arr = list(map(int, input().split()))
freq = [0]*(n+1)
for num in arr:
    if num <= n:
        freq[num] += 1
print(*freq[1:])

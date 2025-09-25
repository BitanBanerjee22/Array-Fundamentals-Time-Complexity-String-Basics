def checkSortedRotated(arr):
    n = len(arr)
    count = 0
    for i in range(n):
        if arr[i] > arr[(i+1)%n]:
            count += 1
            if count > 1:
                return False
    return True

n = int(input())
arr = list(map(int, input().split()))
print("Yes" if checkSortedRotated(arr) else "No")

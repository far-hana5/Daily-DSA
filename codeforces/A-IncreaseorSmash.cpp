t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    k = len(set(arr))
    print(2 * k - 1)

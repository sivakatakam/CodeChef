q = int(input())
for p in range(0, q):
    w = int(input())
    a = list(map(int, input().split()))
    a.sort()
    print(min(a[w-1] - a[2], a[w-2] - a[1], a[w-3] - a[0]))

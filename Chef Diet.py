for i in range(int(input())):
    n, k = map(int, input().split())
    l = list(map(int, input().split()))
    c = 0
    x = 0
    for i in range(n):
        c = c + l[i]
        if c >= k:
            c = c - k
        else:
            x = 1
            break
    if x == 0:
        print("YES")
    else:
        print("NO ", i + 1)

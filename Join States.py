for i in range(int(input())):
    n, m = map(int, input().split())
    l = list(map(int, input().split()))
    c = 0
    x = 0
    for j in l:
        c += j
        if c >= m:
            x += 1
            c = 0
    print(x)

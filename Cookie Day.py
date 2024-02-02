for i in range(int(input())):
    n, k = map(int, input().split())
    l = list(map(int, input().split()))
    c = []
    for i in range(n):
        if l[i] >= k:
            c.append(l[i])
    if len(c) == 0:
        print(-1)
    else:
        r = []
        for i in c:
            r.append(i % k)
        print(min(r))

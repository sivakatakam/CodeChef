for q in range(int(input())):
    w, e = map(int, input().split())
    r = list(map(int, input().split()))
    y = 0
    for t in r:
        if t > e:
            y += 1
    print(y)

for q in range(int(input())):
    w, e = map(int, input().split())
    r = list(map(int, input().split()))
    y = 0
    for t in range(w):
        if r[t] < e:
            y = t + 1
    print(y)

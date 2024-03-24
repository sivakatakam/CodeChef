for q in range(int(input())):
    w = 0
    for  e in range(int(input())):
        r, t = map(int, input().split())
        if t - r > 5:
            w += 1
    print(w)

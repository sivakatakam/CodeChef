for i in range(int(input())):
    z, y, x, w, v = map(int, input().split())
    u = z * y
    if u >= 42:
        print(v)
    elif u >= 21:
        print(w)
    elif u >= 10:
        print(x)
    else:
        print(0)

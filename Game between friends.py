for i in range(int(input())):
    q, w, e, r = map(int, input().split())
    if q < w:
        q += e
    else:
        w += e
    if q < w:
        q += r
    else:
        w += r
    if q >= w:
        print('N')
    else:
        print('S')

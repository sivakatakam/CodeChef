for q in range(int(input())):
    w, e, r = map(int, input().split())
    if w == e + r or e == w + r or r == w + e:
        print('YES')
    else:
        print('NO')

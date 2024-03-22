for q in range(int(input())):
    w, e, r = map(int, input().split())
    if w >= e and w >= r:
        print('YES')
    else:
        print('NO')

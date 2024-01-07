for i in range(int(input())):
    a, b = map(int, input().split())
    if a != b:
        c = 0
        s = min(a, b)
        l = max(a, b)
        while s < l:
            s = s * 2
            if s == l:
                c = 1
                break
        if c == 1:
            print('YES')
        else:
            print('NO')
    else:
        print('YES')

for j in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    c = 0
    for i in l:
        if l.count(i) > 2:
            c = 1
            break
    if c == 1:
        print('NO')
    else: print('YES')

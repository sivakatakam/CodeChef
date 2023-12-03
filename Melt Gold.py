for i in range(int(input())):
    x, y = map(int,input().split())
    x = x - y
    c = 0
    i = 1
    while x > 0:
        x = x - i
        i += 1
        c += 1
    print(c)

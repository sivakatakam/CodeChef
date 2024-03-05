for i in range(int(input())):
    x = int(input())
    s = input()
    c = 0
    n = 0
    for i in s:
        if i == 'C':
            c += 2
        elif i == 'N':
            n += 2
        else:
            c += 1
            n += 1
    if c > n:
        print(60 * x)
    elif c < n:
        print(40 * x)
    else:
        print(55 * x)

for i in range(int(input())):
    m, h = map(int, input().split())
    x = m / (h * h)
    if x < 19:
        print(1)
    elif x < 25:
        print(2)
    elif x < 30:
        print(3)
    else:
        print(4)

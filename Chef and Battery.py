for i in range(int(input())):
    c = int(input())
    x = 0
    while c != 50:
        if c > 50:
            c -= 3
        else:
            c += 2
        x += 1
    print(x)

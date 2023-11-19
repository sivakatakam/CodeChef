for i in range(int(input())):
    b = int(input())
    h = 0
    d = 0
    if b < 1500:
        h = b * 0.1
        d = b * 0.9
    else:
        h = 500
        d = b * 0.98
    print(b + h + d)

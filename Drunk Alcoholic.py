for i in range(int(input())):
    n = int(input())
    c = 0
    s = 0
    for i in range(1, n + 1):
        if c == 0:
            s = s + 3
            c = 1
        elif c == 1:
            s = s - 1
            c = 0
    print(s)

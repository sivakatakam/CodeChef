for i in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    c = 0
    s = 0
    for i in range(n):
        s += l[i]
        if s / (i + 1) == 1:
            c += 1
    print(c)

for i in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    l = [6, 7, 13, 14, 20, 21, 27, 28]
    c = 8
    for i in a:
        if i not in l:
            c += 1
    print(c)

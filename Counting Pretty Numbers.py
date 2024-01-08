for i in range(int(input())):
    a, b = map(int, input().split())
    c = 0
    for i in range(a, b + 1):
        x = i % 10
        if x == 2 or x == 3 or x == 9:
            c += 1
    print(c)

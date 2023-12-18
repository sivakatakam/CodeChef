for i in range(int(input())):
    x, y, a, b = map(int, input().split())
    print((a // x) + (b // y))

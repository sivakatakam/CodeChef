for i in range(int(input())):
    b, l = map(int,input().split())
    print(((l ** 2) - (b ** 2)) ** 0.5, end = ' ')
    print(((b ** 2) + (l ** 2)) ** 0.5)

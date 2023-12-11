for i in range(int(input())):
    a, b = map(int, input().split())
    if a + b < 3:
        print(1)
    elif a + b < 11:
        print(2)
    elif a + b < 61:
        print(3)
    else:
        print(4)

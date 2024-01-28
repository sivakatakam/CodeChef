for i in range(int(input())):
    x1, x2, x3, v1, v2 = map(int, input().split())
    a = x3 - x1
    b = x2 - x3
    s1 = a / v1
    s2 = b / v2
    if s1 < s2:
        print("Chef")
    elif s1 > s2:
        print("Kefa")
    else:
        print("Draw")

for i in range(int(input())):
    x, y, a, b, d = map(int, input().split())
    if x >= a * d and y >= b * d:
        print("YES")
    else:
        print("NO")

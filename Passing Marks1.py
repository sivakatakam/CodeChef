for i in range(int(input())):
    a, b, c, t, x, y, z = map(int, input().split())
    if x >= a and y >= b and z >= c and x + y + z >= t:
        print("YES")
    else:
        print("NO")

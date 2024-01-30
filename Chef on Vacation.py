for i in range(int(input())):
    x, y, z = map(int, input().split())
    if z >= x + y:
        print("YES")
    else:
        print("NO")

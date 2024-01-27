for i in range(int(input())):
    p, l = map(int, input().split())
    if (l / p) * 100 >= 75:
        print("YES")
    else:
        print("NO")

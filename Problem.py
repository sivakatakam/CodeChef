for i in range(int(input())):
    n, x = map(int, input().split())
    if abs(n - x) % 2 == 0:
        print("YES")
    else:
        print("NO")

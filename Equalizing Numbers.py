for i in range(int(input())):
    a, b = map(int, input().split())
    if abs(a - b) % 2 == 0:
        print("YES")
    else:
        print("NO")

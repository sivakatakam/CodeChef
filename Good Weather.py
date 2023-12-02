for i in range(int(input())):
    n = list(map(int,input().split()))
    if sum(n) > 3:
        print("YES")
    else:
        print("NO")

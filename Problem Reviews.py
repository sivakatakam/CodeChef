for i in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    c = 0
    for i in l:
        if i < 5:
            c = 1
            print("NO")
            break
    if c == 0:
        print("YES")

for i in range(int(input())):
    n, m = map(int, input().split())
    c = 0
    while n // 2 != 0:
        c += n // 2
        if n % 2 ==0:
            n = n // 2
        else:
            n = (n // 2) + 1
    if c >= m:
        print("YES")
    else:
        print("NO")

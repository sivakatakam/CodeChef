for i in range(int(input())):
    n, k = map(int, input().split())
    l = list(map(int, input().split()))
    c = 0
    for i in l:
        if i > k:
            c += i - k
    print(c)

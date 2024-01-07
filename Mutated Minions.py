for i in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    c = 0
    for i in a:
        i = i + k
        if i % 7 == 0:
            c += 1
    print(c)

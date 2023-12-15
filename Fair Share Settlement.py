for i in range(int(input())):
    n, k = map(int, input().split())
    e = n // (k + 1)
    r = e * k
    print(n - r)

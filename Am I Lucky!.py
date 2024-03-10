for i in range(int(input())):
    n, x, k = map(int, input().split())
    g = n - x
    x1 = x % k
    g1 = g % k
    print(abs(x1 - g1))

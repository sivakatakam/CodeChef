for i in range(int(input())):
    n, x = map(int, input().split())
    s = list(map(int, input().split()))
    a = (n * x) - sum(s)
    if a < 0:
        a = 0
    print(a)

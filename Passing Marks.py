for i in range(int(input())):
    n, x = map(int, input().split())
    l = list(map(int, input().split()))
    l.sort()
    print(l[-x] - 1)

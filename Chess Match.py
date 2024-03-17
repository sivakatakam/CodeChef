for i in range(int(input())):
    q, w, e = map(int, input().split())
    r = 2 * (180 + q)
    print(r - w - e)

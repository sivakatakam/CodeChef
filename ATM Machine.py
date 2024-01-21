for i in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    s = ''
    for i in a:
        if i <= k:
            s = s + '1'
            k = k - i
        else:
            s = s + '0'
    print(s)

for i in range(int(input())):
    q = int(input())
    w = list(map(int, input().split()))
    e = list(map(int, input().split()))
    r = 0
    for i in range(q):
        if i == 0 and e[0] <= w[0]:
            r += 1
        if e[i] <= w[i] - w[i - 1]:
            r += 1
    print(r)

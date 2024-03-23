for q in range(int(input())):
    w = list(map(int, input().split()))
    e = w [0]
    w.pop(0)
    w.sort()
    print(w[1] + (w[0] * (e - 1)))

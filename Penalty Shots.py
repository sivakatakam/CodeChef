for i in range(int(input())):
    l = list(map(int, input().split()))
    o = 0
    t = 0
    for i in range(10):
        if l[i] == 1:
            if i % 2 == 0:
                o += 1
            else:
                t += 1
    if o == t:
        print(0)
    elif o > t:
        print(1)
    else:
        print(2)

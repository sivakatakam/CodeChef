for q in range(int(input())):
    w = int(input())
    e = list(map(int, input().split()))
    if 0 in e:
        print(0)
    else:
        r = 0
        for t in e:
            if t < 0:
                r += 1
        if r % 2 == 0:
            print(0)
        else:
            print(1)

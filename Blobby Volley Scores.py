for q in range(int(input())):
    w = int(input())
    e = input()
    z = 0
    v = 0
    z1 = 1
    v1 = 0
    for i in e:
        if i == 'A':
            if z1 == 1:
                z += 1
            else:
                z1 = 1
                v1 = 0
        else:
            if v1 == 1:
                v += 1
            else:
                v1 = 1
                z1 = 0
    print(z, v)

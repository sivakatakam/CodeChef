for i in range(int(input())):
    q1, q2, w1, w2 = map(int, input().split())
    if ((q1 * q1) / (w1 * w1 * w1)) == ((q2 * q2) / (w2 * w2 * w2)):
        print('YES')
    else:
        print('NO')

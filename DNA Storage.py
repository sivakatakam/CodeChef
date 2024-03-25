for j in range(int(input())):
    n = int(input())
    q = input()
    s = ''
    for i in range(0, n, 2):
        if q[i] == '0' and q[i + 1] == '0':
            s += 'A'
        elif q[i] == '0' and q[i + 1] == '1':
            s += 'T'
        elif q[i] == '1' and q[i + 1] == '0':
            s += 'C'
        elif q[i] == '1' and q[i + 1] == '1':
            s += 'G'
    print(s)

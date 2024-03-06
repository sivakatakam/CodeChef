for i in range(int(input())):
    n = int(input())
    s = ''
    c = 0
    while n != 0:
        if n % 2 == 0:
            s = s + '0'
        else:
            s = s + '1'
        n = n //2
    for i in s:
        if i == '0':
            c += 0
        else:
            c += 1
    if c % 2 == 0:
        print("EVEN")
    else:
        print("ODD")

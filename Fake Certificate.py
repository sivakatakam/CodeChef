for i in range(int(input())):
    n = int(input())
    s = input()
    c = s.count('1')
    x = 0
    m = 0
    for i in s:
        if i == '0':
            x += 1
        else:
            x = 0
        if m < x:
            m = x
    print(c + m)

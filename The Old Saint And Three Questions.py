for i in range(int(input())):
    k = input()
    l = input()
    o1 = k.count('1')
    o2 = l.count('1')
    z1 = k.count('0')
    z2 = l.count('0')
    if o1 == o2 and z1 == z2:
        print("Pass")
    else:
        print('Fail')

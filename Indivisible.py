for i in range(int(input())):
    a, b, c = map(int, input().split())
    for i in range(2, 101):
        if a % i != 0 and b % i != 0 and c % i != 0:
            print(i)
            break
        
        #or#
for i in range(int(input())):
    a, b, c = map(int, input().split())
    x = 0
    for i in range(a, 2, -1):
        if a % i != 0 and b % i != 0 and c % i != 0:
            print(i)
            x = 1
            break
    if x == 0:
        for i in range(c, 101):
            if a % i != 0 and b % i != 0 and c % i != 0:
                print(i)
                x = 1
                break

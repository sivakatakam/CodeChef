for z in range(int(input())):
    a, m = map(int, input().split())
    if a < 50:
        print('Z')
    elif m < 50 and a > 49:
        print('F')
    else:
        print('A')

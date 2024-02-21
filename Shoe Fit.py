for i in range(int(input())):
    l = list(map(int, input().split()))
    if 1 in l and 0 in l:
        print(1)
    else:
        print(0)

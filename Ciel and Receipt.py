for i in range(int(input())):
    n = int(input())
    l = [2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1]
    c = 0
    i = 0
    while n != 0:
        c += n // l[i]
        n = n % l[i]
        i += 1
    print(c)

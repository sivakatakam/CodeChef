t = int(input())
for i in range(t):
    n = int(input())
    if n % 7 == 0 or n % 7 == 1:
        print(n // 7)
    else:
        print((n // 7) + 1)

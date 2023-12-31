for i in range(int(input())):
    q, p = map(int, input().split())
    if q < 999:
        x = q * p
    else:
        x = (q * p) - (q * p * 0.1)
    print("%.6f" %x)

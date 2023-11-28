for i in range(int(input())):
    n, x, y, a, b = map(int,input().split())
    p = (n / a) * x
    d = (n / b) * y
    if p < d:
        print("PETROL")
    elif d < p:
        print("DIESEL")
    else:
        print("ANY")

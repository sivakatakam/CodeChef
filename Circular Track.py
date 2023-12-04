for i in range(int(input())):
    a, b, m = map(int,input().split())
    print(min(abs(a - b), (a + m - b), (b + m - a)))

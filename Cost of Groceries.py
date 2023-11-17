t = int(input())
for i in range(t):
    n,x = map(int,input().split())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    s=0
    for i in range(n):
        if a[i] >=x:
            s +=b[i]
    print(s)

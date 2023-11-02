def fact(n):
    c=1
    for i in range(1,n+1):
        c=c*i
    return c
t=int(input())
for i in range(t):
    n=int(input())
    x=fact(n)//fact(n-2)
    print(x)

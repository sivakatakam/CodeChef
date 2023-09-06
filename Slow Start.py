t=int(input())
while t:
    x,h=map(int,input().split())
    f=5
    c=0
    while h>0:
        if f>0:
            h=h-x//2
        else:
            h=h-x
        f=f-1
        c=c+1
    print(c)
    t=t-1

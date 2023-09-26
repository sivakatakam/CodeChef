t=int(input())
for i in range(t):
    x,y,r=map(int,input().split())
    m=r//30
    if (x+m)%y==0:
        print((x+m)//y)
    else:
        print(((x+m)//y)+1)

# cook your dish here
import math
t=int(input())
for i in range(t):
    l,v1,v2=map(int,input().split())
    t1=math.ceil(l/v1)
    t2=math.ceil(l/v2)
    if t1==t2:
        print(-1)
    else:
        x=t1-t2-1
        print(x)

t=int(input())
for i in range(t):
    x,y=map(int,input().split())
    if y*20<x:
        print(20)
    else:
        print(x//y)

t=int(input())
for i in range(t):
    a1,a2,b1,b2=map(int,input().split())
    if (a1+b1)<(a2+b2):
        print("YES")
    else:
        print("NO")

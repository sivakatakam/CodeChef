import collections
t=int(input())
for i in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    d={}
    for i in l:
        if i in d:
            d[i]+=1
        else:
            d[i]=1
    x=list(d.values())
    m=max(x)
    if x.count(m)==1:
        print("YES")
    else:
        print("NO")

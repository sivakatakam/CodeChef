t=int(input())
for i in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    for i in range(len(l)-1,-1,-1):
        if l[i]!=0:
            print(i)
            break

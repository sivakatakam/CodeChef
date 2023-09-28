t=int(input())
for i in range(t):
    a1,a2,a3,b1,b2,b3=map(int,input().split())
    p1=(a1+a2+a3)-min(a1,a2,a3)
    p2=(b1+b2+b3)-min(b1,b2,b3)
    if p1>p2:
        print("Alice")
    elif p1<p2:
        print("Bob")
    else:
        print("Tie")

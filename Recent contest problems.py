t=int(input())
for i in range(t):
    n=int(input())
    x=list(map(str,input().split()))
    s1=x.count("START38")
    s2=x.count("LTIME108")
    print(f"{s1} {s2}")

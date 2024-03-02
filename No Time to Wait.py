n, h, x = map(int, input().split())
l = list(map(int, input().split()))
if h - x in l:
    print("YES")
else:
    print("NO")

t = int(input())

while t > 0:
    n = int(input())
    d = list(map(int, input().split()))
    # Your code goes here
    t -= 1
    c = 1
    for i in range(n - 1):
        if d[i] > d[i + 1]:
            print("NO")
            c = 0
            break
    if c == 1:
        print("YES")

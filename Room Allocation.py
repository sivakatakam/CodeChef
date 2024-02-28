import math
for i in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    r = 0
    for i in a:
        r += math.ceil(i / 2)
    print(r)

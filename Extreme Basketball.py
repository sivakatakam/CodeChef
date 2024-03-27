import math
for q in range(int(input())):
    w, e = map(int, input().split())
    if w >= e + 10:
        print(0)
    elif w > e:
        print(math.ceil((10 - (w - e)) / 3))
    else:
        print(math.ceil(((10 + e) - w) / 3))

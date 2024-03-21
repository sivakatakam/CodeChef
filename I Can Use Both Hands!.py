import math
for q in range(int(input())):
    w, e, r = map(int, input().split())
    print(math.ceil(r / w) + (r // e))

import math
for i in range(int(input())):
    x, n = map(int, input().split())
    if x * 100 >= n:
        print(0)
    else:
        print(math.ceil((n / 100) - x))

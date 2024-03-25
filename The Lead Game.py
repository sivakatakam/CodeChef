p = []
s = []
a = 0
b = 0
for i in range(int(input())):
    m, n = map(int, input().split())
    a += m
    b += n
    c = abs(a - b)
    s.append(c)
    if a > b:
        p.append(1)
    else:
        p.append(2)
i = s.index(max(s))
print(p[i], max(s))

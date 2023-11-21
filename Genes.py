a, b = map(str, input().split())
if a == b:
    print(a)
elif a == 'R' and b == 'B' or a == 'B' and b == 'R':
    print('R')
elif a == 'R' and b == 'G' or a == 'G' and b == 'R':
    print('R')
elif a == 'B' and b == 'G' or a == 'G' and b == 'B':
    print('B')

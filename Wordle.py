t = int(input())
for i in range(t):
    s1 = input()
    s2 = input()
    for i in range(5):
        if s1[i] == s2[i]:
            print('G', end = '')
        else:
            print('B', end = '')
    print()

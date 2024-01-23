for i in range(int(input())):
    s = input()
    x = 'CODETOWN'
    v = 'AEIOU'
    c = 0
    for i in range(len(s)):
        if x[i] in v and s[i] in v or x[i] not in v and s[i] not in v:
            c = 0
        else:
            c = 1
            break
    if c == 0:
        print("YES")
    else:
        print("NO")

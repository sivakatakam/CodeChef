for i in range(int(input())):
    n = int(input())
    c = 0
    s = input()
    for i in s:
        if i not in 'aeiou':
            c += 1
        else:
            c = 0
        if c == 4:
            break
    if c == 4:
        print("NO")
    else:
        print("YES")

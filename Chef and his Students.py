for i in range(int(input())):
    s = input()
    x = 0
    for i in range(len(s) - 1):
        if s[i] == '<' and s[i + 1] == '>':
            x += 1
    print(x)

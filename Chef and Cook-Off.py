for q in range(int(input())):
    w = input().count('1')
    if w == 5:
        print('Jeff Dean')
    elif w == 4:
        print('Hacker')
    elif w == 3:
        print('Senior Developer')
    elif w == 2:
        print('Middle Developer')
    elif w == 1:
        print('Junior Developer')
    else:
        print('Beginner')

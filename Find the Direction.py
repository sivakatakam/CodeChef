for i in range(int(input())):
    x = int(input())
    c = x % 4
    if c == 0:
        print("North")
    elif c == 1:
        print("East")
    elif c == 2:
        print("South")
    else:
        print("West")

for i in range(int(input())):
    n = int(input())
    if n == int("".join(reversed(str(n)))):
        print("wins")
    else:
        print("loses")

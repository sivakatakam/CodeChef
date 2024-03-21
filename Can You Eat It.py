for q in range(int(input())):
    w, e = map(int, input().split())
    if w % e == 0:
        print(w // e)
    else:
        print(-1)

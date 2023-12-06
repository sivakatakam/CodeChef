for i in range(int(input())):
    n = int(input())
    s = 0
    r = 0
    s = s + n // 100
    r = n % 100
    s = s + r // 50
    r = r % 50
    s = s + r // 10
    r = r % 10
    s = s + r // 5
    r = r % 5
    s = s + r // 2
    s = s + r % 2
    print(s)

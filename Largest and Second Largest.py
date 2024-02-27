t = int(input())

while t > 0:
    n = int(input())
    a = list(map(int, input().split()))
    t -= 1
# Your code goes here
    a = list(set(a))
    a.sort()
    print(a[-1] + a[-2])

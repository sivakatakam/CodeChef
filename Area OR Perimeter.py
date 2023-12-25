l = int(input())
b = int(input())
a = l * b
p = 2 * (l + b)
if a > p:
    print("Area")
elif a < p:
    print("Peri")
else:
    print("Eq")
print(max(a, p))

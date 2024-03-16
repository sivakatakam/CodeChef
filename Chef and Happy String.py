t = int(input())
while t > 0:
    s = input()
    # Your code goes here
    c = ''
    for i in s:
        if i in 'aeiou':
            c += 'V'
        else:
            c += 'C'
    if 'VVV' in c:
        print('Happy')
    else:
        print('Sad')
    t -= 1

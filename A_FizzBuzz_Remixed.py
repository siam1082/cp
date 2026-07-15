t = int(input())
for i in range(t):
    n = int(input())
    a = 3 * (n // 15)
    n %= 15
    for j in range(n + 1):
        if j % 3 == j % 5:
            a+= 1
    print(a)

# import math

# def solve(a, b, c):
#     return c % math.gcd(a, b) == 0

# a, b, c = map(int, input().split())

# if solve(a, b, c):
#     print("Yes")
# else:
#     print("No")
def has_positive_solution(a, b, c):
    # Try all possible y values from 0 up to c//b
    for y in range(c // b + 1):
        x = (c - b * y) / a
        if x.is_integer() and x >= 0:
            return True
    return False

# Input three numbers in one line
a, b, c = map(int, input().split())

if has_positive_solution(a, b, c):
    print("Yes")
else:
    print("No")

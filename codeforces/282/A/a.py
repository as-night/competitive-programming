import sys

n = int(sys.stdin.readline().strip())
x = 0
s = ''

for _ in range(n):
    s = sys.stdin.readline().strip()
    if s[1] == '+':
        x += 1
    else:
        x -= 1

print(x)

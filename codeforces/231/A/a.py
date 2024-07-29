import sys

n = int(sys.stdin.readline().strip())
s = 0
ans = 0

for _ in range(n):
    s = sys.stdin.readline().strip()
    if int(s[0]) + int(s[2]) + int(s[4]) >= 2:
        ans += 1

print(ans)

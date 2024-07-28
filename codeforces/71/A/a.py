import sys

n = int(sys.stdin.readline().strip())
s = ''

for _ in range(n):
    s = sys.stdin.readline().strip()

    if len(s) > 10:
        print(f'{s[0]}{len(s)-2}{s[-1]}')
    else:
        print(s)

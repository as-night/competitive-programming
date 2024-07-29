import sys

s = []
tmp = 0
for i in range(5):
    s = sys.stdin.readline().strip().split()
    try:
        tmp = s.index('1')
    except ValueError:
        continue
    print(abs(2 - i) + abs(2 - tmp))
    sys.exit()

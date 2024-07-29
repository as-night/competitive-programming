import sys

m, n = map(int, sys.stdin.readline().strip().split())

if m * n % 2 == 0:
    print(m * n // 2)
else:
    print((m * n - 1) // 2)

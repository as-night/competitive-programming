import sys
from math import ceil

n, m, a = map(int, sys.stdin.readline().strip().split())

print(ceil(m/a) * ceil(n/a))

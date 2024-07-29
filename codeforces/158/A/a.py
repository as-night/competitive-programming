import sys

n, k = map(int, sys.stdin.readline().strip().split())
a = [int(x) for x in sys.stdin.readline().strip().split()]

score = a[k - 1]
sum = 0
for num in a:
    if num > 0 and num >= score:
        sum += 1

print(sum)

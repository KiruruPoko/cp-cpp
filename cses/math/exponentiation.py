import sys
input = sys.stdin.readline
tt = int(input())
for _ in range(tt):
    a, b = map(int, input().split())
    MOD = 1000000007
    print(pow(a, b, MOD))
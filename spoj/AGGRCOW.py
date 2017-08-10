



t = input()
for i in range(t):
    n, m = raw_input().split()
    n, m = int(n), int(m)
    barn = []
    for i in range(n):
        temp = int(raw_input())
        barn.append(temp)
    barn = sorted(barn)
    
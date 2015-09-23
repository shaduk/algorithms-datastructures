# https://www.hackerrank.com/challenges/diagonal-difference

m = input()
masterlist = []
leftsum = 0
rightsum = 0
for i in range(0,int(m)):
    ar = [int(i) for i in input().strip().split()]
    masterlist.append(ar)
    
for i in range(0,int(m)):
    leftsum = leftsum + masterlist[i][i]

for i in range(0,int(m)):
    rightsum = rightsum + masterlist[i][int(m)-i-1]
print(abs(leftsum - rightsum))
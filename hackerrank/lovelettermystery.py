# https://www.hackerrank.com/challenges/the-love-letter-mystery

# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())
li = []
for i in range(n):
    j = raw_input()
    li.append(j)

for i in li:
    total = 0
    n = len(i)-1
    for j in range(0,n/2+1):
        if i[j]==i[n-j]:
            
            total = total
        elif i[j]>i[n-j]:
          
            total=total+(ord(i[j])-ord(i[n-j]))
        else:
           
            total=total+(ord(i[n-j])-ord(i[j])) 
            
    print total
 
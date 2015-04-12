#   https://www.hackerrank.com/challenges/utopian-tree

# Enter your code here. Read input from STDIN. Print output to STDOUT

n = int(raw_input())
li = []
for i in range(n):
    j = int(raw_input())
    li.append(j)
  
for i in li:
    total = 0
    for n in range(i+1):
        if n%2!=0:
            total = 2*total
        elif n%2==0 and n!=0:
            total = total + 1
        else:
            total = 1
    print total
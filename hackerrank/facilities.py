# https://www.hackerrank.com/contests/booking-hackathon/challenges/facilities-extraction


# Enter your code here. Read input from STDIN. Print output to STDOUT

n = int(raw_input())
li = []
for i in range(n):
    j = raw_input()
    li.append(j)
 
statement = raw_input()

newli = []
for i in li:
    if(statement.lower().find(i.lower())!= -1):
        newli.append(i)
        
for x in sorted(newli):
    print x
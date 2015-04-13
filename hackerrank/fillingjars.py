# https://www.hackerrank.com/challenges/filling-jars

inp1 = raw_input().split(' ')
inp1 = map(int, inp1)
total = 0
for i in range(0,inp1[1]):
    inp2 = raw_input().split(' ')
    inp2 = map(int, inp2)
   
    total = total + (inp2[1]-inp2[0]+1)*inp2[2]
    
print int(total/inp1[0])
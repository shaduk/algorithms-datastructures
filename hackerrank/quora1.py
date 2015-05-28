
def score(n):
    return n*(n-1)/2

def noninc(inlist):
    count = 1
    scored = 0
    for i in range(0,len(inlist)-1):
        if inlist[i+1]<=inlist[i]:
            count = count +1            
        else:
            scored = scored + score(count)
            count = 1
    scored = scored + score(count)
    return scored

def nondec(inlist):
    count = 1
    scored = 0
    for i in range(0,len(inlist)-1):
        if inlist[i+1]>=inlist[i]:
            count = count +1            
        else:
            scored = scored + score(count)
            count = 1
    scored = scored + score(count)
    return scored
    
n,k= raw_input().split(" ")
n = int(n)
k = int(k)

li = []

li = raw_input().split(" ")

for i in range(0,n-k+1):
    list1 = []
    for x in range(i,i+k):
        list1.append(int(li[x]))
    
    print nondec(list1)-noninc(list1)
       
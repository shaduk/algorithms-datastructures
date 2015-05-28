
def upvotes(inlist):
    count = 0
    count2 = 0
    for i in range(0,len(inlist)-1):
        if inlist[i+1]>inlist[i]:
            count = count + 1
        elif inlist[i+1]<inlist[i]:
            count2 = count2 +1
        else:
            count = count + 1
            count2 = count2 +1
    '''if count+1==len(inlist):
        count = count+1'''
    return count,count2 
    
    
n,k= raw_input().split(" ")
n = int(n)
k = int(k)

li = []

li = raw_input().split(" ")

for i in range(0,n-k+1):
    list1 = []
    for x in range(i,i+k):
        list1.append(int(li[x]))
    
    print upvotes(list1)
       
        
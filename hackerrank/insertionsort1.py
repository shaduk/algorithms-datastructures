#!/bin/python
def insertionSort(ar):  
    right = ar[len(ar)-1]
    count = 0
    for i in range(len(ar)-2,-1,-1):
        if(ar[i] >= right):
            ar[i+1] = ar[i]
        elif(count>0 and ar[i] < right):
            break
        else:
            count = count + 1
            ar[i+1] = right
        for j in ar:
            print(j, end=" ")
        print('\t')
    if(count==0):
        ar[i] = right
        for j in ar:
            print(j, end=" ")
        
m = input()
ar = [int(i) for i in input().strip().split()]
insertionSort(ar)
#Problem        : Finals Spring 2015 - Conference Room Scheduler
#Language       : Python
#Compiled Using : py_compile
#Version        : Python 2.7.8
#Input for your program will be provided from STDIN
#Print out all output from your program to STDOUT

from __future__ import print_function
import sys

N = int(raw_input())
inputdata = sys.stdin.read().splitlines()

data = {}

for line in inputdata :
    query = line.split("-")
    if(len(query) == 3):
        room, start, end = int(query[0]), int(query[1]), int(query[2])
        canBook = True
        for i in range(start, start + end):
            if(i not in data):
                data[i] = []
            elif(room not in data[i]):
                canBook = True
            else:
                canBook = False
                break
        if(canBook == True):
            for i in range(start, start + end):
                data[i].append(room)
            print("Y")
        else:
            print("N")
    else:
        timeSlot = int(query[0])
        noOfSlots = int(query[1])
        ans = [i for i in range(1,  N + 1)]
        for i in range(timeSlot, timeSlot + noOfSlots):
            if i in data:
                for j in data[i]:
                    if j in ans:
                        ans.remove(j)
        if(len(ans) == 0):
            print("None")
        else:
            for i in ans:
                print(i, end =" ")
            print()

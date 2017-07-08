#Problem        : Messed up Rugby
#Language       : Python 3
#Compiled Using : py_compile
#Version        : Python 3.4.3
#Input for your program will be provided from STDIN
#Print out all output from your program to STDOUT

import sys

data = sys.stdin.read().splitlines()
n = 0
for line in data :
    n = int(line)
c = 0
for i in range(0, 40):
    for j in range(0, 80):
        for k in range(0, 115):
            if(7*i + 3*j + k*2 == n):
                c = c + 1
                print(str(i) + " " + str(j) + " "+str(k))
   
if(c == 0):
    print("0 0 0")
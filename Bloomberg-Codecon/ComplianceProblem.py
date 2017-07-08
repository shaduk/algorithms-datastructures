#Problem        : A Compliance Problem
#Language       : Python 3
#Compiled Using : py_compile
#Version        : Python 3.4.3
#Input for your program will be provided from STDIN
#Print out all output from your program to STDOUT

import sys

data = sys.stdin.read().splitlines()

word = 0
for line in data :
    word = line
mydict = {}

c = 0

for let in word:
    if let in mydict:
        mydict[let] += 1
    else:
        mydict[let] = 1

for key, val in mydict.items():
    if(val%2 != 0):
        c = c + 1

if(c <= 1):
    print("yes")
else:
    print("no")
#Problem        : Mug Color
#Language       : Python 3
#Compiled Using : py_compile
#Version        : Python 3.4.3
#Input for your program will be provided from STDIN
#Print out all output from your program to STDOUT

import sys

data = sys.stdin.read().splitlines()

mydict = {}
for line in data :
   mydict[line] = 1
  
  
for i in ('White', 'Yellow', 'Black', 'Blue', 'Red'):
    if i not in mydict:
        print(i)

#Problem        : Expecto Palindronum
#Language       : Python
#Compiled Using : py_compile
#Version        : Python 2.7.8
#Input for your program will be provided from STDIN
#Print out all output from your program to STDOUT

from __future__ import print_function
import sys

data = sys.stdin.read().splitlines()

for line in data :
    c = 0
    for i in range(len(line), -1, -1):
        temp = line[0:i]
        if(temp == temp[::-1]):
            break
        else:
            c = c + 1
    print(c + len(line))

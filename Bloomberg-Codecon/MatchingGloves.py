#Problem        : Finals Spring 2015 - Matching Gloves
#Language       : Python
#Compiled Using : py_compile
#Version        : Python 2.7.8
#Input for your program will be provided from STDIN
#Print out all output from your program to STDOUT

from __future__ import print_function
import sys


n = int(raw_input())


table = {}
for i in range(n):
    string = raw_input()
    if(string == string[::-1]):
        continue
    sortstr = ''.join(sorted(string))
    if sortstr in table:
        table[sortstr] += 1
    else:
        table[sortstr] = 1
        
flag = False
pairs = 0
for key, values in table.iteritems():
    if(values%2 == 0):
        pairs = pairs + values/2
    else:
        print("-1")
        flag = True
        break

if(flag == False):
    print(pairs)

#Problem        : Matching Datasets
#Language       : Python
#Compiled Using : py_compile
#Version        : Python 2.7.8
#Input for your program will be provided from STDIN
#Print out all output from your program to STDOUT

from __future__ import print_function
import sys
from copy import copy


data = sys.stdin.read().splitlines()

def squaredError(a, b):
    r = copy(a)
    for i in range(len(a)):
        r[i] = float(r[i]) - float(b[i])
        r[i] = float(r[i])*float(r[i])
    return sum(r)

orig = []
newdata = []

n = int(data[0])

for i in range(0, n):
    orig.append(data[i+1].split(","))

for i in range(n, n + n):
    newdata.append(data[i+1].split(","))

for i in range(0, len(orig)):
    match = 1928283
    index = -1
    for j in range(0, len(newdata)):
        if(squaredError(orig[i], newdata[j]) < match):
            match = squaredError(orig[i], newdata[j]) 
            index = j
    print(str(i)+","+str(index))
                
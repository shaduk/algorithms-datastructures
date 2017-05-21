#Problem        : Laundry Day
#Language       : Python 3
#Compiled Using : py_compile
#Version        : Python 3.4.3
#Input for your program will be provided from STDIN
#Print out all output from your program to STDOUT

import sys

data = sys.stdin.read().splitlines()

mydict = {}

for line in data :
    if line not in mydict:
        mydict[line] = 1
    else:
        mydict[line] += 1

for keys, vals in sorted(mydict.items(), key=lambda x: x[0].lower()):
    if 'sock' in keys:
        print(str(vals//2) + "|" + keys)
        if(vals%2 != 0 and vals != 1):
            print("0" + "|" + keys)
    else:
        print(str(vals) + "|" + keys)

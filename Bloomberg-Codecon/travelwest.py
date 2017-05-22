#Problem        : 2016 Qualifiers - Travel to the West
#Language       : Python 3
#Compiled Using : py_compile
#Version        : Python 3.4.3
#Input for your program will be provided from STDIN
#Print out all output from your program to STDOUT

import sys

data = sys.stdin.read().splitlines()

graph = {}
visited = {}
for line in data:
    if(len(line.split())!=1):
        fromcity, tocity = line.split()
        if fromcity in graph:
            graph[fromcity].append(tocity)
        else:
            graph[fromcity] = [tocity]
        
def find_all_paths(graph, start, end, path=[]):
    path = path + [start]
    if start == end:
        return [path]
    if start not in graph:
        return []
    paths = []
    for node in graph[start]:
        if node not in path:
            newpaths = find_all_paths(graph, node, end, path)
            for newpath in newpaths:
                paths.append(newpath)
    return paths

print(len(find_all_paths(graph, 'JFK', 'SFO')))
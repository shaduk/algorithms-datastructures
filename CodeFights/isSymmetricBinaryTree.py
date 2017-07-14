#
# Definition for binary tree:
# class Tree(object):
#   def __init__(self, x):
#     self.value = x
#     self.left = None
#     self.right = None
#
from collections import deque

def isTreeSymmetric(t):
    q1 = deque()
    q2 = deque()
    q1.append(t)
    q2.append(t)
    while(len(q1) != 0 and len(q2) != 0 and len(q1) == len(q2)):
        temp1 = q1.popleft()
        temp2 = q2.popleft()
        if(temp1 == None and temp2 == None):
            continue
        if(temp1 == None or temp2 == None):
            return False 
        if(temp1.value != temp2.value):
            return False
        q1.append(temp1.left)
        q1.append(temp1.right)
        q2.append(temp2.right)
        q2.append(temp2.left)
    if(len(q1) != 0 or len(q2) != 0):
        return False 
    return True
            
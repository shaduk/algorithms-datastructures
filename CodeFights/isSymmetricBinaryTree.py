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
    if(t == None):
        return True
    if(t.left == None and t.right == None):
        return True 
    elif(t.left == None or t.right == None):
        return False 
    if(t.left != None):
        q1.append(t.left)
    if(t.right != None):
        q2.append(t.right)
    while(len(q1) != 0 and len(q2) != 0 and len(q1) == len(q2)):
        temp1 = q1.popleft()
        temp2 = q2.popleft()
        if(temp1 != None and temp2 != None):
            if(temp1.value != temp2.value):
                return False
        if(temp1 == None and temp2 != None):
            return False
        if(temp2 == None and temp1 != None):
            return False 
        if(temp1 != None):
            q1.append(temp1.left)
            q1.append(temp1.right)
        if(temp2 != None):
            q2.append(temp2.right)
            q2.append(temp2.left)
    if(len(q1) != 0 or len(q2) != 0):
        return False 
    return True
            
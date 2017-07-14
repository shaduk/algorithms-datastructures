#
# Definition for binary tree:
# class Tree(object):
#   def __init__(self, x):
#     self.value = x
#     self.left = None
#     self.right = None
'''
Given two binary trees t1 and t2, determine whether the second one is a subtree of the first one. 
A subtree for vertex v in binary tree t is a tree consisting of v and all its descendants in t.
Your task is to check whether there is a vertex v in tree t1 such that a subtree for vertex v in t1 equals t2. '''

from collections import deque

def isSameTree(t1, t2):
    if(t1 == None and t2 == None):
        return True
    if(t1 == None or t2 == None):
        return False
    if(t1.value == t2.value):
        return isSameTree(t1.left, t2.left) and isSameTree(t1.right, t2.right)
    else:
        return False

def isSubtree(t1, t2):
    if(t1 == None and t2 == None):
        return True
    if(t2 == None):
        return True
    if(t1 == None):
        return False
    return isSameTree(t1, t2) or isSubtree(t1.left, t2) or isSubtree(t1.right, t2)

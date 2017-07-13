'''
Given a binary tree t and an integer s, determine whether there is a root to leaf path in t such that the sum of vertex values equals s.
'''

#
# Definition for binary tree:
# class Tree(object):
#   def __init__(self, x):
#     self.value = x
#     self.left = None
#     self.right = None
#     
def hasPathUtil(root, s, pval):
    root.value = root.value + pval
    if(root.value == s and root.left == None and root.right == None):
        return True
    if root.left != None and hasPathUtil(root.left, s, root.value) == True:
        return True
    if root.right != None and hasPathUtil(root.right, s, root.value) == True:    
        return True
    return False 

def hasPathWithGivenSum(t, s):
    if(t == None and s == 0):
        return True 
    if(t == None):
        return False
    return hasPathUtil(t, s, 0)

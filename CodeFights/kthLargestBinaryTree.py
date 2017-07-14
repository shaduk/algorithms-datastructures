#
'''
and k = 3, the output should be
kthLargestInBST(t, k) = 4.

Here is what t looks like:

   3
 /   \
1     5
     / \
    4   6
The values of t are [1, 3, 4, 5, 6], and the 3rd largest is 4.
'''
# Definition for binary tree:
# class Tree(object):
#   def __init__(self, x):
#     self.value = x
#     self.left = None
#     self.right = None
from collections import deque

def kthLargestInBST(t, k):
    q = deque()
    current = t 
    counter = 0
    while(current != None or len(q) != 0):
        if(current != None):
            q.append(current)
            current = current.left
        else:
            if(len(q) > 0):
                current = q.pop()
                counter = counter + 1
                if(counter == k):
                    return current.value
                current = current.right
    return -1
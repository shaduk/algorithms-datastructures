'''
Given a list of integers, which denote a permutation.

Find the next permutation in ascending order.

 Notice

The list may contains duplicate integers.

Have you met this question in a real interview? Yes
Example
For [1,3,2,3], the next permutation is [1,3,3,2]

For [4,3,2,1], the next permutation is [1,2,3,4]
'''

class Solution:
    # @param num :  a list of integer
    # @return : a list of integer
    
    def reverseSwap(self, num, l, r):
        while l < r:
            num[l], num[r] = num[r], num[l]
            l += 1
            r -= 1
    
    def nextPermutation(self, num):
        index = len(num) - 1
        if(index < 1):
            return num
        while(index - 1 >= 0 and num[index-1] >= num[index]):
            index -= 1
        if(index == 0):
            return num[::-1]
        n = len(num) - 1
        while(n >= index and num[index-1] >= num[n]):
            n -= 1
        num[index-1], num[n] = num[n], num[index-1]
        self.reverseSwap(num, index, len(num)-1)
        return num
        

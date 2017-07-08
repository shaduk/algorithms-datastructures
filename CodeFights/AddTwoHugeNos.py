# Definition for singly-linked list:
# class ListNode(object):
#   def __init__(self, x):
#     self.value = x
#     self.next = None
#
def addTwoHugeNumbers(a, b):
    n1 = ""
    temp1 = a
    while(temp1 != None): 
        n1 = n1 + str(temp1.value).zfill(4)
        temp1 = temp1.next
    n2 = ""
    temp2 = b 
    while(temp2 != None):
        n2 = n2 + str(temp2.value).zfill(4)
        temp2 = temp2.next
    newlist = ListNode(0)
    temp = newlist
    total = str(int(n1) + int(n2))
    tlen = len(total)
    while(tlen%4 != 0):
        tlen = tlen+1
    total = total.zfill(tlen)
    start = 0
    while(start < len(total)):
        if(start + 4 < len(total)):
            temp.value = int(total[start:start+4])
            start = start + 4
            temp.next = ListNode(0)
            temp = temp.next
        else:
            temp.value = int(total[start:])
            break 
    return newlist 

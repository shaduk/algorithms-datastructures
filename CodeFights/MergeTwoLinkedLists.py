# Definition for singly-linked list:
# class ListNode(object):
#   def __init__(self, x):
#     self.value = x
#     self.next = None
#
def mergeTwoLinkedLists(l1, l2):
    if(l1 == None):
        return l2
    if(l2 == None):
        return l1
    newlist = ListNode(0)
    temp = newlist
    prev = temp 
    while(l1 != None and l2 != None):
        if(l1.value < l2.value):
            temp.value = l1.value
            l1 = l1.next 
        else:
            temp.value = l2.value
            l2 = l2.next
        temp.next = ListNode(0)
        prev = temp 
        temp = temp.next
    if(l1 != None):
        prev.next = l1
    if(l2 != None):
        prev.next = l2 
    return newlist 

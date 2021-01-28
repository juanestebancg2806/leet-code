# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        ans = ListNode()
        N1 = N2 = 0 
        it,_pow = l1,1
        while(it != None):
            N1,it,_pow = N1+(_pow*it.val),it.next,_pow*10
        it,_pow = l2,1
        while(it != None):
            N2,it,_pow = N2+(_pow*it.val),it.next,_pow*10
        _sum = N1+N2
        it = ans
        while(_sum > 0):
            it.val = _sum%10
            _sum = _sum//10
            if(_sum > 0):
                it.next = ListNode()
                it = it.next
        return ans
        
        
        

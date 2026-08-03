# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        if not head:
            return
        a=[]
        while head is not None:
            a.append(head)
            head=head.next
        n=len(a)-1
        i=0
        while i  <  n :
            a[i].next=a[n]
            i+=1
            if i==n:
                break
            a[n].next=a[i]
            n-=1
        a[i].next=None

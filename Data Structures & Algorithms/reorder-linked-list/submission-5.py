# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        slow=head
        fast=head
        while fast is not None and fast.next is not None:
            slow=slow.next
            fast=fast.next.next;
        curr=slow.next
        slow.next=None
        prev=None
        while curr is not None:
            a=curr.next
            curr.next=prev
            prev=curr
            curr=a

        f=head
        s=prev
        while s is not None:
            x=f.next;
            y=s.next
            f.next=s
            s.next=x
            f=x
            s=y
        # return head









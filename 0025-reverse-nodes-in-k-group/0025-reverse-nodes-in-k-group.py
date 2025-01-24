# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def reverseKGroup(head: ListNode, k: int) -> ListNode:
    dummy = ListNode(0)
    dummy.next = head
    prev_tail = dummy
    current = head

    while True:
        # Check if there are k nodes remaining starting from current
        start = current
        end = current
        count = 0
        while end and count < k - 1:
            end = end.next
            count += 1
        if not end:
            # Less than k nodes, connect the remaining and break
            prev_tail.next = start
            break
        
        # Save the next group's start
        next_group = end.next

        # Reverse the k nodes
        prev = None
        curr = start
        for _ in range(k):
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        
        # Connect previous tail to the new head of reversed group
        prev_tail.next = prev
        # Update the tail to the end of the reversed group (which was the start)
        prev_tail = start
        # Connect the reversed group's tail to the next group
        prev_tail.next = next_group

        # Move current to the next group's start
        current = next_group

    return dummy.next
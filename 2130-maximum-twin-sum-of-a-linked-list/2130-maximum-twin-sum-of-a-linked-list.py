# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        temp = []
        node = head
        while node:
            temp.append(node.val)
            node = node.next
        node = head
        
        res = float("-inf")
        for _ in range(len(temp) // 2):
            res = max(res, node.val + temp.pop())
            node = node.next
        return res
        
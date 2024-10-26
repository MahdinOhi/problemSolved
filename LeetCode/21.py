# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        lst = []
        def traverse(linked_list):
            current = listNode.head
            while current:
                lst.append(current.data)
                current = current.next

        lst = sorted(lst)

        print(lst[0])
class Solution(object):
    def mergeKLists(self, lists):
        result = []

        # Pushing all the values from the linked lists into a single list
        for head in lists:
            while head:
                result.append(head.val)
                head = head.next

        # Sort the list
        result.sort()

        dummy = ListNode(0)
        current = dummy

        for value in result:
            current.next = ListNode(value)
            current = current.next

        return dummy.next

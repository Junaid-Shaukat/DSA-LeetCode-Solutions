class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* first = dummy;
        ListNode* second = dummy;

        for (int i = 0; i <= n; ++i) {
            first = first->next;
        }

        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        ListNode* toDelete = second->next;
        second->next = second->next->next;
        delete toDelete; 
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};

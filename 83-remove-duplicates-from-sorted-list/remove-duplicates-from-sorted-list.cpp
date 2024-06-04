/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head)
            return nullptr;

        ListNode* current = head;

        while (current && current->next) {
            if (current->val == current->next->val) {

                ListNode* nextNext = current->next->next;
                delete current->next;
                current->next = nextNext;
            } else {

                current = current->next;
            }
        }

        return head;
    }
};

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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* temp ;

        if (head->next->next == nullptr){
            head->next->next = head;
            temp = head->next;
            head->next = nullptr;
            head = temp;
            return head;
        }

        temp =  head->next;
        head->next = head->next->next;
        temp->next = head;
        head = temp;

        temp = head->next;

        while(temp->next->next){
            ListNode* nextnodeoftemp = temp->next;
            temp->next = temp->next->next;

            ListNode* nextnodeofnextnodeoftemp = nextnodeoftemp->next;
            nextnodeoftemp->next = nextnodeoftemp->next->next;
           
            nextnodeofnextnodeoftemp->next = nextnodeoftemp;
    
            temp = temp->next->next;
        
            if (temp->next == nullptr){
                break;
            }    
        }
        return head;
    }
};
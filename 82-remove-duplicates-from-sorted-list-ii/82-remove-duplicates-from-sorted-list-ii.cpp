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
        ListNode* p = head, *q = NULL;
        while(p && p->next){
            if(p->val == p->next->val){
                while(p && p->next && p->val == p->next->val){
                    p = p->next;
                }
                if(q) q->next = p->next;
                else head = p->next;
                p = p->next;
            }
            else {
                 q = p;
                 p = p->next;
            }
        }
        return head;
    }
};
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next) return NULL;
        ListNode* p = head;
        ListNode* q = head;
        ListNode* t = NULL;
        while(p->next){
            if(n-1 > 0){
                cout << p->val << " ";
                p = p->next;
                n--;
            }
            else{
                t = q;
                q = q->next;
                cout << p->val << " ";
                p = p->next;
            }
        }
        if(t) t->next = q->next;
        else head = head->next;
        
        return head;
    }
};
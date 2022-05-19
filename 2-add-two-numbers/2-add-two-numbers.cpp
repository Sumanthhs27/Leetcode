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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* p = l1;
        ListNode* q = l2;
        int borrow = 0;
        ListNode* p_prev = NULL;
        ListNode* q_prev = NULL;
        
        while(p || q){
            if(p && q){
                p->val = p->val + q->val + borrow;
                borrow = (p->val)/10;
                p->val = p->val%10;
                p_prev = p;
                q_prev = q;
                cout << p->val << " " << borrow << endl;
                p = p->next;
                q = q->next;
                
            }
            else if(p) {
                p->val = (p->val + borrow);
                borrow = (p->val)/10;
                p->val = p->val%10;
                p_prev = p;
                
                p = p->next;
            }
            else if(q) {
                ListNode * t = new ListNode(0);
                t->next = NULL;
                t->val = (q->val + borrow);
                borrow = (t->val)/10;
                t->val = t->val%10;
                cout << t->val << " " << borrow << endl;
                p_prev->next = t;
                p_prev = t;
                p = t->next;
                q = q->next;
            }
        }
        if(borrow == 1){
            ListNode * f = new ListNode(1);
            f->next = NULL;
            p_prev->next = f;
        }               
        return (l1);
    }
};
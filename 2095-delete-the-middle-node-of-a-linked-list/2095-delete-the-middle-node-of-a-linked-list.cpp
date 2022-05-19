
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return NULL;
        ListNode* p = head;
        ListNode* q = head;
        ListNode* t = NULL;
        
        while(p){
            if(p->next){
                t = q;
                q = q->next;
                p = p->next->next;
            }
            else {
                p = p->next;
            }
        }
        t->next = q->next;
        delete q;
        return head;
        
    }
};

class Solution {
public:
    
    ListNode* reverse(ListNode* head){
        ListNode* p = head;
        ListNode* q = NULL;
        ListNode* t;
        
        while(p){
            t = p->next;
            p->next = q;
            q = p;
            p = t;
        }
        return q;
    }
      
    int pairSum(ListNode* head) {
        ListNode* p = head;
        ListNode* q = head;
        ListNode* prev = NULL;
        while(p){
            if(p->next){
                prev = q;
                q = q->next;
                p = p->next->next;
            }
        }

        ListNode* rest_head = reverse(q);
     
        prev->next = rest_head;
         p = head;
        int maxi = INT_MIN;
        while(rest_head){
            maxi = max(p->val + rest_head->val, maxi);
           
            p = p->next;
            rest_head = rest_head->next;
        }
        return maxi;
    }
};
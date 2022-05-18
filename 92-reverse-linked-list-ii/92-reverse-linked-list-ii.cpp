
class Solution {
public:
  
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(!head->next || left==right) return head;
        ListNode* p = head;
        ListNode* prev = NULL;
        ListNode* t;
        int node_cnt = 0;
        
        while(p && node_cnt < left-1){
            node_cnt++;
            prev = p;
            p = p->next;
        }
        ListNode* entry = p;
        ListNode* q = NULL;       
        int cnt = 0;
        while(p && cnt < right-left+1){
            cnt++;
            t = p->next;
            p->next = q; 
            q = p;
            p = t;
        }
        if(prev) prev->next = q;
        else head = q;
        entry->next = p;
        
        return head;       
    }
};
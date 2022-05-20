class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* p = head;
        ListNode* q = head;
        if(p == NULL || p->next == NULL) return NULL;
        
        while(p && p->next){
            p = p->next->next;
            q = q ->next;
            if(p == q) break;
        }
        if(p != q) return NULL;
        q = head;
        while(p != q){
            p = p->next;
            q = q->next;
        }
        
        return q;        
    }
};





/*
        ListNode* p = head;     
        while(p){
            if(!p->next) return NULL;
            else {
                if(p->next->val == INT_MAX) return p->next;
                else p->val = INT_MAX;
            }
            p = p->next;
        }
        
        return NULL;
        




        map<ListNode*, int> m;
        ListNode* p = head;
        
        while(p){
            if(!p->next) return NULL;
            else {
                if(m.find(p->next) != m.end()) return p->next;
                else m[p]++;
            }
            p = p->next;
        }
        return NULL;

*/
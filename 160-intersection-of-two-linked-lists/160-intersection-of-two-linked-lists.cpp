/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
        ListNode* p = headA;
        ListNode* q = headB;
        
        while(p != q){
            if(!p) p = headB;
            else p = p->next;
            if(!q) q = headA;
            else q = q->next;
        }
        
        return p;
        
    }
};

/*
        map<ListNode*, int> m;
        ListNode* p = headA;
        
        while(p){
            m[p]++;
            p = p->next;
        }
        ListNode* q = headB;
        while(q) {
            if(m.find(q) != m.end()) return q;
            else q = q->next;
        }
        return NULL;


*/
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
    }
};
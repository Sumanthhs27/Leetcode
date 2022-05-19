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
    ListNode *detectCycle(ListNode *head) {
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
    }
};
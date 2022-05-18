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
    vector<int> nextLargerNodes(ListNode* head) {
        
        ListNode* p = head;
        vector<int> v;
        while(p){
            ListNode* q = p->next;
            while(q){
                if(q->val > p->val) {
                    v.push_back(q->val);
                    break;
                }
                else q = q->next;
            }
            if(!q) v.push_back(0);
            p = p->next;
        }
       return v; 
        
    }
};
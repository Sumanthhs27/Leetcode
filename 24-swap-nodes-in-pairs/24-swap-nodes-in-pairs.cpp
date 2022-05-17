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
//     ListNode* reverse(ListNode* head){
//         ListNode* p = head;
//         ListNode* q = NULL;
//         ListNode* t;
//         int cnt = 0;
        
//         while(p && cnt < 2){
//             cnt++;
//             t = p->next;
//             p->next = q;
//             q = p;
//             p = t;
//         }
//         if(p){
//             ListNode* rest_head = reverse(p);
//             head->next = rest_head;
//         }
        
//         return q;        
//     }
    
    
    
    
    
    ListNode* swapPairs(ListNode* head) {
       ListNode* p = head;
        ListNode* q = NULL;
        ListNode* t;
        int cnt = 0;
        
        while(p && cnt < 2){
            cnt++;
            t = p->next;
            p->next = q;
            q = p;
            p = t;
        }
        if(p){
            ListNode* rest_head = swapPairs(p);
            head->next = rest_head;
        }
        
        return q;   
    }
};
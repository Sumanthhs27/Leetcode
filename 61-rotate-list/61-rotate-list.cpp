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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || !head) return head;
        int len = 1;
        ListNode* p = head;
        ListNode* last = head;
        
        while(last->next){
            len++;
            last = last->next;
        }
        k = k%len;
        while(len-k-1 > 0){
            p = p->next;
            len--;
        }
        last->next = head;
        head = p->next;
        p->next = NULL;
        return head;
    }
};
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* itr = head;
        int length = 0;
        while(itr != NULL){
            length++;
            itr = itr->next;
        }
        
        itr = head;
        ListNode* first;
        ListNode* last;
        int counter = 1;
        while(itr != NULL){
            if(counter == k){
                first = itr;
            }
            if(counter == length +1 - k){
                last = itr;
            }
            counter++;
            itr = itr->next;
        }
        
        cout<<first->val<<" "<<last->val;
        swap(first->val , last->val);
        return head;
    }
};
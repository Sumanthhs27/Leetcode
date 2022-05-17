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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        ListNode *odd=head, *evenhead=head->next, *even = evenhead;
        while(even && even->next)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = evenhead;
        return head;
       
    }
};


/*
 ListNode *p = head;
        ListNode *t, *q;
        int cnt = 0;
        if(head == NULL || head->next == NULL) return head;
        
        while(p){
            t = p->next;
            cnt++;
            if(cnt == 1) q = t;
                        
            if(t && t->next){
                p->next = t->next;
                 p = t;
            }
            else {
                if(cnt%2 == 1){
                    p->next = q;
                    return head;
                }
                else {
                    p->next = NULL;
                    t->next = q;
                    return head;
                }
            }                        
        }
        return head;
*/
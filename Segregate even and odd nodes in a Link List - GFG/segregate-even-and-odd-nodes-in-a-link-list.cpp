// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        
        Node* p = head;
        Node* oddHead = NULL;
        Node* evenHead = NULL;
        Node* odd = NULL ;
        Node* even = NULL;
        
        while(p){
            if(p->data%2 == 0){
                if(!evenHead){
                    evenHead = p;
                    even = p;
                    p = p->next;
                }
                else {
                    even->next = p;
                    even = p;
                    p = p->next;
                }
            }
            else if(p->data % 2 == 1){
                if(!oddHead){
                    oddHead = p;
                    odd = p;
                    p = p->next;
                }
                else{
                    odd->next = p;
                    odd = p;
                    p = p->next;
                }
            }
            
        }
        if(odd) odd->next = NULL;
        if(!evenHead) return oddHead;
        else {
            even->next = oddHead;
            head = evenHead;
        }
        return head;
        
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends
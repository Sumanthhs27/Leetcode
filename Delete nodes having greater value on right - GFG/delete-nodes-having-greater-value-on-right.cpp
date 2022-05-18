// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



 // } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
    public:
    
    Node* reverse(Node* head){
        Node* p = head;
        Node* q = NULL;
        Node* t;
        
        while(p){
            t = p->next;
            p->next = q;
            q = p;
            p = t;
        }
        return q;
    }
    
    
    Node *compute(Node *head){
       Node* reverse_head = reverse(head);
       Node* p = reverse_head->next;
       Node* q = reverse_head;
       int maxi = q->data;
       
       while(p){
           if(p->data < maxi){
               q->next = p->next;
               p = p->next;
           }
           else{
               maxi = max(maxi,p->data);
               q = p;
               p = p->next;
           } 
       }
       return reverse(reverse_head);
       
    }
    
};
   


// { Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}
  // } Driver Code Ends
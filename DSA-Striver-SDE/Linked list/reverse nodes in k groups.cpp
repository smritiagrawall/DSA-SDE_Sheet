#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
Node *reverse(Node *head,int n,int b[]) {
	if(head==NULL || head->next==NULL || n<=0) return head;
	int k=b[0];
	if(k==0){
		return reverse(head,n-1,b+1);
	}
	Node* curr=head;
	Node* prev=NULL;
	Node* next=NULL;
	int cnt=0;

	while(curr!=NULL && cnt<k){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
		cnt++;

	}
	if(next!=NULL){
		Node* newHead=reverse(next,n-1,b+1);
		head->next=newHead;
	}

	return prev;
}

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
		
	return  reverse(head, n, b);
}
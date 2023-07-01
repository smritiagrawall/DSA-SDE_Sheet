/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
int length(Node*head){
     
    Node* temp=head;
    int len=0;
    while(temp->next!=NULL){
        
        len++;
        temp=temp->next;
    }
    return len;
}

Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head==NULL || head->next==NULL || k==0){
          return head;
     }
     Node* temp=head;
     int len=1;
     while(temp->next)
     {
          len++;
          temp=temp->next;
     }

 
     //int len=length(head);
     // Node* prev=len-1;
     temp->next=head;
     k=k%len;
     k=len-k;
     while(k--){
     temp=temp->next;
     }
     head=temp->next;
     temp->next=NULL;
     return head;

}
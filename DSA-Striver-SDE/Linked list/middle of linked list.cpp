/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    //approach 1 o(n)
    // Node* temp=head;
    // int cnt=0;
    // while(temp!=NULL){
    //     cnt++;
    //     temp=temp->next;
    // }
    // temp=head;
    // for(int i=0;i<cnt/2;i++){
    //     temp=temp->next;
        
    // }
    // return temp;

    //approach 2

    Node *fast=head;
    Node *slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}


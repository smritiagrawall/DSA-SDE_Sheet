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
int length(Node*head){
     if(head==NULL)return NULL;
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        
        len++;
        temp=temp->next;
    }
    return len;
}
Node* removeKthNode(Node* head, int K){

    // Write your code here.
    if(head==NULL)return NULL;
    int len=length(head);
    int position=len-K;
    if(len==K){
    Node* node =head;
    head=head->next;
    delete node;
    return head; 
      }
      else{
  Node* temp=head;
    int cnt = 1;
    while (cnt < position) {
      temp = temp->next;
      cnt++;
    }

    Node *temp1 = temp->next;
    temp->next = temp->next->next;
    delete temp1;
    return head;
      }
    }



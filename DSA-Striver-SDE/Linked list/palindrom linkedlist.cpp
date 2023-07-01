#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>* finMid(LinkedListNode<int>* head ){
    LinkedListNode<int>* slow=head;
    LinkedListNode<int>* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow;
}

LinkedListNode<int>* reverse(LinkedListNode<int>* head){
 LinkedListNode<int>* curr=head;
 LinkedListNode<int>* prev=NULL;
 LinkedListNode<int>* next=NULL;

 while(curr!=NULL){
     next=curr->next;
     curr->next=prev;
     prev=curr;
     curr=next;
 }
 return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL){
        return true;
    }
    //find middle
    LinkedListNode<int>* middle=finMid(head);

    //reverse from mid to end

    LinkedListNode<int>* temp=middle->next;
    middle->next=reverse(temp);

    //compare
    LinkedListNode<int>* head1=head;
    LinkedListNode<int>* head2=middle->next;

    while(head2!=NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;

    }

    // repest step 4 reverse
  
    //  temp=middle->next;
    // middle->next=reverse(temp);

    return true;

}
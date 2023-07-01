/****************************************************************

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

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    if(firstHead==NULL || secondHead==NULL) return NULL;

    Node* slow=firstHead;
    Node* fast=secondHead;

    while(slow!=fast){
        if(slow==NULL) slow= secondHead;
        else
          slow=slow->next; 
         
        
        if(fast==NULL) fast=firstHead;
        else
            fast=fast->next;

    }
    return slow;

}

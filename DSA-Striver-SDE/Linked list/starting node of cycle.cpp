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

Node* detectCycle(Node *head)
{
	//	Write your code here

        if (head == NULL) {
        return NULL;
        }

        Node* slow=head;
        Node* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;

            if(slow==fast){
                return slow;
            }
        }
        return NULL;
}

Node *firstNode(Node *head)
{
    //    Write your code here.
     if (head == NULL) {
        return NULL;
        }

    Node* intersection=detectCycle(head);
    if(intersection==NULL){
        return NULL;
    }

    Node* slow=head;
    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}
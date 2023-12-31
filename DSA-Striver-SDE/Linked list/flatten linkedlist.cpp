/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
 Node* merge(Node* a, Node* b) {
Node *temp = new Node(0);
    Node *ans = temp; 
    while(a != NULL && b != NULL) {
        if(a->data < b->data) {
            temp->child = a; 
            temp = temp->child; 
            a = a->child; 
        }
        else {
            temp->child = b;
            temp = temp->child; 
            b = b->child; 
        }
    }
    if(a!=NULL) temp->child = a; 
    else temp->child = b; 
    return ans -> child; 
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(head==NULL || head->next==NULL) return head;

	Node* right=flattenLinkedList(head->next);
	head->next=NULL;
	Node* down=merge(head,right);
	return down;
}

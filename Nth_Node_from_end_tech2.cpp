// C++ program for the above approach
#include <iostream>
using namespace std;

// Node class to represent
// a node of the linked list.
class Node {
public:
	int data;
	Node* next;

	// Default constructor
	Node()
	{
		data = 0;
		next = NULL;
	}

	// Parameterised Constructor
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node* head= NULL;

// Function to insert a new node.
void insertNode(int data)
{
	// Create the new Node.
	Node* newNode = new Node(data);

	// Assign to head
	if (head == NULL) {
		head = newNode;
		return;
	}

	// Traverse till end of list
	Node* temp = head;
	while (temp->next != NULL) {

		// Update temp
		temp = temp->next;
	}

	// Insert at the last.
	temp->next = newNode;
}

// Function to print the
// nodes of the linked list.
void printList()
{
	Node* temp = head;

	// Check for empty list.
	if (head == NULL) {
		cout << "List empty" << endl;
		return;
	}

	// Traverse the list.
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}
// Function to reverse a linked list
Node * reverse(Node* head)
{
     //recursive reversal
         Node *newhead;
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        newhead=reverse(head->next);
  
        Node* headnext;
        headnext=head->next;
        headnext->next=head;
        head->next=NULL;
        
        return newhead;
}
// Driver Code
int main()
{
	

	// Inserting nodes
	insertNode(1);
	insertNode(2);
	insertNode(3);
	insertNode(4);
    insertNode(5);
	insertNode(6);
	insertNode(7);
	insertNode(8);

	cout << "Elements of the list are: ";

	// Print the list
	printList();
	cout << endl;
   
   //Node to be found from last assuming it is always within bounds	
    int k=3;

    //Reversing the linked list
    head=reverse(head);
    
    //making a copy variable
    Node * temp=head;
    
    //Traversing k nodes from front assuming 1-indexed 
    //Here we are already at first so we need k-1 more steps to reach kth node so we (--k) here
    //For(k--) we need to decrement k initially by 1
    while(--k)
     temp=temp->next;
     cout<<"The required element is:"<<temp->data<<"\n";

	return 0;
}

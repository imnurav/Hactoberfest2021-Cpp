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
int length()
{
    if(head==NULL) return 0;
    Node* temp;
    temp=head;
    int count=0;
    while(temp!=NULL)
     {
      count++;
      temp=temp->next;
     }
    
  return count;
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
   
   //Finding length of list
	int len=length();

    //Finding position from start assuming list to be 1-indexed
    int n=len-k;
    Node* temp=head;
    if(len==0)
     cout<<"List is empty\n";
     else{
        while(n--)
         temp=temp->next;
     }
     cout<"The required element is:"<<temp->data<<"\n";

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAttail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    return;
}
void insertAthead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void evenAfterOdd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    if (odd->next = NULL)
    {
        even->next = NULL;
    }
}
int main()
{
    node *head = NULL;
    insertAttail(head, 1);
    insertAttail(head, 2);
    insertAttail(head, 3);
    insertAttail(head, 4);
    insertAttail(head, 5);
    insertAttail(head, 6);
    display(head);
    evenAfterOdd(head);
    display(head);
    return 0;
}
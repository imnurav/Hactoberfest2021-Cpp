#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    
}*start,*newptr,*save,*ptr;

Node* getNode(int n)
{
    ptr =new Node;
    ptr->data=n;
    ptr->next=NULL;
}

void sort_List(Node** head)
{
    Node *i;
    Node *j;

    int t;

    for ( i = *head; i->next!=NULL; i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            if(i->data > j->data)
            {
                t=i->data;
                i->data=j->data;
                j->data=t;
            }
        }
    }
    

}


void Display(Node* np)
{
   
    while(np!=NULL)
    {
        cout<<np->data<<"->";
        np=np->next;
    }
    cout<<"!!\n";
     sort_List(&start);
}

int main()
{
    

    int data,pos;

    start = NULL;
    start = getNode(3);
    start->next = getNode(44);
    start->next->next = getNode(12);
    start->next->next->next = getNode(11);
    start->next->next->next->next = getNode(10);

   
         cout<<"Now the list is: \n";
         Display(start);

        // data = 2, pos = 3;
        // Insert_Pos(&start, pos, data);
      
        sort_List(&start);

    cout<<"sorted list:"<<endl;
        Display(start);
   
    return 0;
} 
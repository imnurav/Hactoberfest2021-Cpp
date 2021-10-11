#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }


};

void insertAttail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;

    while (temp!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    return;
    
}
void deleteAthead(node* head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAthead(head);
        return;
    }
    node *temp=head;
    while (temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
    
}

void insertAthead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;

}
void display(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main(){
    node* head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    // display(head);
    insertAthead(head,5);
    display(head);

    // deletion(head,3);
    deleteAthead(head);
    display(head);




    return 0;
}
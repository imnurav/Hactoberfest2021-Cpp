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
int length(node* &head){
    node* temp=head;
    int l=0;
    while (temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
    
}
void AppendLastKnodes(node* &head,int k){
    node* temp=head;
    int m=0;
    node* newTail;
    node* Tail;
    node* newHead;
    int l=length(head);

    while(m!=l){
        if(m==l-k){
            newTail=temp;
        }
        if(m==l-k+1){
            newHead=temp;
        }
        if(m==l){
            Tail=temp;
        }
        m++;
        temp=temp->next;
    }
    newTail->next=NULL;
    Tail->next=head;
    head=newHead;
}

int main(){
    node* head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    insertAttail(head,6);
    display(head);
    cout<<endl;
    AppendLastKnodes(head,3);
    display(head);
    
}
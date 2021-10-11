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
    
}
void display(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
 node* reverseknode(node* &head,int k){
     node* prevptr=NULL;
     node* currptr=head;
     node* nextptr=head->next;
     int count =0;
     while (currptr!=NULL && count<k)
     {
         nextptr=currptr->next;
         currptr->next=prevptr;
         prevptr=currptr;
         currptr=nextptr;
         count++;
     }

     if (nextptr!=NULL)
     {
         head->next=reverseknode(nextptr,k);
     }
     return prevptr;
     
}
int main(){
    node* head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,5);
    display(head);
    cout<<endl;
    node* h=reverseknode(head,2);
    display(head);

}
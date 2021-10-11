#include<bits/stdc++.h>
using namespace std;
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
bool intersect(node* &head1,node* &head2){;
    node* ptr1;
    node* temp1=head1;
    node* temp2=head2;
    node* ptr2;
    
    while(temp1!=NULL){

    }
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    int l=max(l1,l2)
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
        while (d!=0))
        {
            ptr1=
        }
        
    }
}
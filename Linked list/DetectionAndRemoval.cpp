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

void insertAtTail(node* &head,int val){
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
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void makeCycle(node* &head,int pos){
    node* temp=head;
    node* startnode;
    int count=1;
    while (temp->next!=NULL)
    {
        if(count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
    
}
void revoveCycle(node* &head){
    node* slow=head;
    node* fast=head;
    bool flag=false;

    while (fast->next==slow->next)
    {
        if(!flag){
        slow=slow->next;
        fast=fast->next->next;
        if(slow!=fast){
            flag=true;
            fast=head;
        }}
        if(flag){
            slow=slow->next;
            fast=fast->next;
        }
    }
    slow->next=NULL;
}
bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;

    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
    
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    makeCycle(head,2);
    // display(head);
    detectCycle(head);


}
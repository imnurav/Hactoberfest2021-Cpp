#include<bits/stdc++.h>
using namespace std;
struct Stack
{
    char ch;
    Stack *next;
};
class Stack_Paranthesis
{
    Stack *top = NULL;
    Stack *ptr;

protected:
    void reset_stack();
    bool pop(char ch);
    void push(char ch);
    bool isEmpty();

public:
    void processing_Results();
};


void Stack_Paranthesis:: processing_Results(){
    string Expression;
    int popcount=0;
    int pushCount=0;
    bool flag;
    cout<<"Enter the Expression Using the Multiple Paranthesis: ";
    cin>>Expression;
    for (int i = 0; i < Expression.size(); i++)
    {
        if(Expression[i]=='('|| Expression[i]=='{'||Expression[i]=='['){
            push(Expression[i]);
            pushCount++;
        } else if (Expression[i]==')'|| Expression[i]=='}'||Expression[i]==']'){
            if(isEmpty()){
                cout<<"Stack is Empty as the Expression is Unbalanced "<<endl;
                break;
            }else{
                flag=pop(Expression[i]);
                popcount++;
            }
        }
    }

    if(flag==false){
        cout<<"Pop Operation Can't be perform as Expression is Unbalanced"<<endl;
    }

    if(popcount==pushCount){
        cout<<"Stack is balanced"<<endl;
    }else if(pushCount>popcount){
        cout<<"Stack is Unbalanced"<<endl;
        reset_stack();
    }

}
void Stack_Paranthesis::reset_stack()
{
    while (top != NULL)
    {
        Stack *ptr = top;
        top=top->next;
        delete ptr;
    }
}

bool Stack_Paranthesis::isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Stack_Paranthesis::push(char ch)
{
    Stack *new_node = new Stack;
    new_node->ch = ch;
    if (top == NULL)
    {
        top = new_node;
    }
    else
    {
        new_node->next = top;
        top = new_node;
    }
}
bool Stack_Paranthesis::pop(char R_ch)
{
    Stack *new_node = top;
    if((top->ch=='('&&R_ch==')')||(top->ch=='{'&&R_ch=='}')||(top->ch=='['&&R_ch==']')){
        top=top->next;
        delete new_node;
        return true;
    }else{
        return false;
    }
}
int main()
{
    int choice;
    Stack_Paranthesis operations;
    do
    {
        cout << "1. Result of the Given Expression:" << endl;
        cout << "2. Exit" << endl;
        cout << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            operations.processing_Results();
            break;
        }
        case 2:
        {
            break;
        }

        default:
            break;
        }
    } while (choice != 2);

    return 0;
}
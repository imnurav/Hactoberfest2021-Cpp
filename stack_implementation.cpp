#include<bits/stdc++.h>
#define max 100
using namespace std;
int stk[max],top=-1;
void push()
{
	int x;
	if(top>max)
	{
		cout<<"Overflow Condition\n";
		return;
	}
	top++;
	cout<<"Enter the element\n";
	cin>>x;
	stk[top]=x;
}
void pop()
{
	if(top<0)
	{
		cout<<"Stack is empty\n";
		return;
	}
	cout<<"Pop element:";
	cout<<stk[top];
	top--;
	cout<<endl;
}
void peep()
{
	if(top<0)
	{
		cout<<"Stack is empty\n";
		return;
	}
	cout<<"Top element of stack:";
	cout<<stk[top];
	cout<<endl;
}
void size()
{
	if(top<0)
	{
		cout<<"Stack is empty\n";
		return;
	}
	cout<<"Size of stack:"<<top+1<<endl;
	for(int i=0;i<=top;i++)
	cout<<stk[i]<<" ";
	cout<<endl;

}
int main()
{
	int op;
	do{
		cout<<"...........Menu.........\n";
		cout<<"\n1)push()\n 2)pop()\n 3)top() \n4)size()\n5) 0 for exit\n";
		cout<<"Enter option:";
		cin>>op;
		switch(op)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peep();
			break;
			case 4:size();
			break;
			case 0:cout<<"BYE \n";
			break;
			default:
				cout<<"Invalid option\n";
		}
	}while(op!=0);
}

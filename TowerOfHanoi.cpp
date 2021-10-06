// Tower of Hanoi is a mathematical puzzle in which we have three rods and n disks. 
// The objective of the puzzle is to move the entire stack to another rod, obeying the following rules:
// * Only one disk can be moved at a time.
// * Each move consists of taking the upper disk (top most) from one of the stacks and placing it on top of another stack.
// * larger disk cannot be placed on top of a smaller disk.

#include <iostream>
using namespace std;

void TOH(int x,char a ,char c,char b)
{
	if(x==1)
	{     cout<<"Move the disc 1 from "<<a<<" to "<<c<<endl;       // only disc remaining.
		x=x-1;
	}
	else
	{
		TOH(x-1,a,b,c) ;                                            // Moving n-1 poles to auxillary pole.
        cout<<"Move the disc "<<x<<" from "<<a<<" to "<<c<<endl;
		TOH(x-1,b,c,a);                                             // Move n-1 poles to destination.
	}
}


int main()
{	
  char a,b,c;
	int x;
	a='A';                                                       // Start disc
	b='B';                                                       // Auxillary disc
	c='C';                                                       // End Disc
  
	cout<<"Enter value of discs";
  
	cin>>x;
  
	TOH(x,a,c,b);
  
	return 0;
}



//some unique patterns 
#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<"Enter number of rows: ";
	cin>>n;
	cout<<"\n-------Hollow diamond in Square--------\n\n";
	for(i=1;i<=(n*2)-1;i++)
	{
		for(j=1;j<=(n*2)-1;j++)
		{
		if((j<=(n-i)+1 || j>=n+i-1) ||(j<=i-n+1 || j>=((3*n)-i)-1) )
		{	
			cout<<"* ";
		}
			else
				cout<<"  ";
		}
		cout<<endl;		
	}
	
	cout<<endl;
	cout<<endl;
	for(i=1;i<=(n*2);i++)
	{
		for(j=1;j<=(n*2);j++)
		{
		if((j<=(n-i)+1 || j>=n+i) ||(j<=i-n || j>=((3*n)-i)+1) )
		{	
			cout<<"* ";
		}
			else
				cout<<"  ";
		}
		cout<<endl;		
	}
		
return 0;
}



//output:
/*


Enter number of rows: 6

-------Hollow diamond in Square--------

* * * * * * * * * * *
* * * * *   * * * * *
* * * *       * * * *
* * *           * * *
* *               * *
*                   *
* *               * *
* * *           * * *
* * * *       * * * *
* * * * *   * * * * *
* * * * * * * * * * *

*/

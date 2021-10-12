#include<bits/stdc++.h>

using namespace std;
int chess[11][11];

// checking if is it right place to put queen there?

bool isPossible(int n,int row,int col){
// same column
	for(int i=row-1;i>=0;i--)
	{  if(chess[i][col]==1)
       {
		 return false;
       	}
	}
//upper	left diagonal
 for(int i=row-1,j=col-1;i>=0 && j>=0; i--,j-- ){
 	if(chess[i][j]==1){
 		return false;
	 }
 }
 //Upper right Diagonal
  for(int i=row-1,j=col+1;i>=0&&j<n;i--,j++)
  {
  	if(chess[i][j]==1)
  	 return false;
  }
  return true;
}

//backtracking..
void nQ(int n, int row)
{
	if(row==n)
	{// we have reached some solution.
	 // print the matrix.
	 // return.
	 
	 for(int i=0;i<n;i++)
	  {
	  for(int j=0;j<n;j++)
	   {
	   	cout<<chess[i][j]<<" ";
	   }
		cout<<endl;
	}
	cout<<endl;}
	
	// place at all possible positions and move to smaller problem.
	for(int j=0;j<n;j++)
	{
		if(isPossible(n,row,j))
		{
			chess[row][j]=1;
			nQ(n,row+1);
			chess[row][j]=0;
			
		}
		
	}
    return;
}


void nqueen(int n)
{  memset(chess,0,11*11*sizeof(int));
   nQ(n,0);
	
}

int main()
{
	int n=4;
	nqueen(n);
	return 0;
}

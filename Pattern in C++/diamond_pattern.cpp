#include <iostream>
using namespace std;
int main()
{
    int lines ;
    cout<<"Enter the number of lines : ";
    cin>>lines;
    int numbers=1,space=lines/2;
    for(int i=1;i<=lines;i++)
    {
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=numbers;k++)
        {
            cout<<k;
        }
        if(i==(lines+1)/2&&(lines%2)==0)
        {

        }
        else if(i<(lines+1)/2)
        {
           space=space-1;
           numbers=numbers+2;
        }
        else
        {
            space=space+1;
            numbers=numbers-2;
        }
        cout<<endl;
    }
}

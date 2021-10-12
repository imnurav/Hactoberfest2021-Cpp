#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);
    char checkCharacter;
    cout<<"\nEnter a character to check its frequency in the given string : ";
    cin>>checkCharacter;
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }

    cout << "Number of " << checkCharacter << " = " << count;

    return 0;
}

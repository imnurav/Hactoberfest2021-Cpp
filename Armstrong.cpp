#include<bits/stdc++.h>
using namespace std;
 
// Function to calculate x raised to the power y //
int power(int x, unsigned int y)
{
    if( y == 0)
        return 1;
    if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    return x*power(x, y/2)*power(x, y/2);
}
 
// Function to calculate order of the number //
int order(int x)
{
    int n = 0;
    while (x)
    {
        n++;
        x = x/10;
    }
    return n;
}
 
// Function to check whether the given number is
// Armstrong number or not
bool isArmstrong(int x)
{
    // Calling order function
    int n = order(x);
    int temp = x, sum = 0;
    while (temp)
    {
        int rem = temp%10;
        sum += power(rem, n);
        temp = temp/10;
    }
 
    // If satisfies Armstrong condition
    return (sum == x);
}
 

int main()
{
    cout<<"Enter any number to check for armstrong : ";
    cin>>x;
    cout << isArmstrong(x) << endl;
    
    cout<<"Enter another number to check for armstrong : ";
    cin>>y;
    cout << isArmstrong(y) << endl;
    return 0;
}

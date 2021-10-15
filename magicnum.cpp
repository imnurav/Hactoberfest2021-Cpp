// Magic num: an number whose recursive sum of its digits is equal to 1.
// For example: 1234 is a Magic number. Because the recursive sum i.e. 1+2+3+4=10, 1+0=1.
#include <iostream>
using namespace std;

int magic(int n) //calculating the sum of each digit
{
    int s,r;
   while(n>9)  //  loop is running untill we get a single digit sum
  {
       s=0;
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
   n=s;
   }

   return s;
}

int main() {
	
	int n,sum;
	cout<<"Enter the number to be checked : ";
	cin>>n;
	if(n>9)
	sum=magic(n); // sum is returned to the main method
	else
        sum=n;
	if(sum==1)  // sum is then compared with 1
	cout<<n<<" is a Magic number";   //If both of them turn out to be equal the number is a Magic number else it isn't
	else
	cout<<n<<" is not a Magic number";
	return 0;
}

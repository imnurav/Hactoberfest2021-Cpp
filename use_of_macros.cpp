#include <iostream>
using namespace std;

/*
    Macros are used to build some specific functions 
    where it basically remove the over head of type checking
    but also include the overhea to certain exceptions
 */


//  to find min or max 
#define MIN(a,b) (((a)<(b)) ? a:b)
#define MAX(a,b) (((a)>(b)) ? a:b)
#define SQR(a)   ((a)*(a))


//  can be used to store constants
#define PI 3.14


// merging operator
// #define MERGE(s1)    printf("%s = %s",#s1,s1); // for c program

int main() {
    int number1=2,number2=4; // the inputs can also be float and double the macro will work the same for everyone
    // cin >> number1 >> number2;
	
    cout << "\nMaximum of " << number1 << " and " << number2 << " is " << MAX(number1, number2);
    cout << "\nMinimum of " << number1 << " and " << number2 << " is " << MIN(number1, number2);
    cout << "\nSquare of "  << number1 << " is "  << SQR(number1);
    cout << "\nArea of Circle of radius=" << number1 << " is " << PI*SQR(number1);
    
    // int pull_request = 100;          // for c program
    // cout << MERGE(pull_request);     // for c program
    return 0;
}

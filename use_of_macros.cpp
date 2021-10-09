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



/* structure to build function from different file
``````````````````````````````````````````````````*/
#ifndef MYFUNCTION_H
#define MYFUNCTION_H
/*
    Your function goes here...
*/
#endif
/*`````````````````````````````````````````````````*/



// merging operator
#define MERGE(s1,s2)    cout<< s1##s2 << endl;



// assert is used to check the condition as the program proceeds controlled by debug macro
#define DEBUG 1

#if( DEBUG == 1 )
#define ASSERT( expression ) 				        \
	cout << #expression << " ..." << num ;		    \
	if( expression!= true) {				        \
  		cout << " Failed in file: " << __FILE__ ;   \
  		cout << " at line: " << __LINE__ << endl;	\
	}							                    \
	else cout << " Passed" << endl ;

#elif( DEBUG == 0 )
#define ASSERT( result )			        		\
cout << "Number is " << num << endl ;
#endif 
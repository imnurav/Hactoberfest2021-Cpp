// A simple c++ program that tells if triangle can be built or not with the
// sides of given length
#include<iostream>

using namespace std;

bool isTriangle(long a, long b, long c){
	if(a<1 || b<1 || c<1)
		return 0;
	else
		return ((a + b) > c && (b + c) > a && (a + c) > b) ? true : false; // Triangle inequality theorem
}

int main(){
	long a,b,c;
	cout<<"Enter sides of triangle: ";
	cin>>a>>b>>c;
	
	if (isTriangle(a,b,c) == true)
		cout<<"triangle";
	else 
		cout<<"not a triangle";
}

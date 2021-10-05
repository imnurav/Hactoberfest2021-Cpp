/*
 Problem 7
 
  By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
  What is the 10 001st prime number?
 
 */

#include<iostream>
using namespace std;

int main(){
	const int N=10001;
	int array[N];
	int PrimeNumber;
	int j;

	array[0]=2;
	array[1]=3;

	for(int i=2;i<N;i++){
		PrimeNumber=array[i-1]+2;
		j=0;
		while(j<i){
			while((j<i) and (PrimeNumber%array[j]!=0)){
			    //while the number is not a multiple of a previous prime
				j++;
			}
			if(j==i)//if it is prime
				array[i]=PrimeNumber;//we store it in the array
			else{
			    //try again with the following number
				PrimeNumber+=1;
				j=0;
			}
		}
	}

	cout<<array[N-1]<<endl;

	return 0;
}

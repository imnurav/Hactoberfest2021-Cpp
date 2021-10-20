//Program to check whether one string is the rotation of the other or not
//By Kriti Arora
// College-- UIET KURUKSHETRA 
// CSE 2020-24



#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	
	int l1=s1.length();
	int l2=s2.length();
	
	if(l1!=l2)
	cout<<"String 2 is not the rotation of String 1"<<endl;
	else{
		string s3=s1+s1;
		if(s3.find(s2)!=string::npos)
		cout<<"String 2 is the rotation of String 1"<<endl;
		else
		cout<<"String 2 is not the rotation of String 1"<<endl;
	}
	
	return 0;
}

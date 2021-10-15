#include<bits/stdc++.h>
using namespace std;
int find_frequency(vector<int> arr,int num)
{
    int count=0;
    for(auto x: arr)
    {
        if(x==num)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int size,value,num;
    cout<<"please enter array size:-";
    cin>>size;
    vector<int> arr;
    cout<<"please enter the values"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>value;
        arr.push_back(value);
    }
    cout<<"please enter the number whose frequency is required:-";
    cin>>num;
    cout<<find_frequency(arr,num);
    
}

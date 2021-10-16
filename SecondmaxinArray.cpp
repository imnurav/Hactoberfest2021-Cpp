#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n],l=0,i=0;
    int mx = INT_MIN;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
        mx = max(mx,A[i]);
    }
    int s_min=INT_MIN;
    for(int i=0;i<5;i++){
        if(A[i] == mx){
            continue;
        }
        else{
            s_min = max(s_min,A[i]);
        }
    }
    cout << s_min << endl;

}
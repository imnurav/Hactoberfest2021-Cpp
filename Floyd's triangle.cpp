#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number of label upto which u want to print ,basically number of rows"<<endl;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        //we are defining one more loop because main work will be done from this basically column work
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
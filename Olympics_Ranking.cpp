#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
    int G1,S1,B1,G2,S2,B2,sum1=0,sum2=0;
    cin >> G1 >> S1 >> B1 >> G2 >> S2 >> B2;
    sum1=G1+S1+B1;
    sum2=G2+S2+B2;
    if(sum1>sum2){
        cout << 1<<"\n";
    }
    else{
        cout << 2<< "\n";
    
    }
    }
}

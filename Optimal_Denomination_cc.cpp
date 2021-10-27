#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void max()
{
    ll n,i,j,result=0;
    cin>>n;
    ll arr[n];
    
    for(i=0;i<n;i++)
    cin>>arr[i];
    
    if(n==1)
    {cout<<"1"<<"\n";return ;}
    sort(arr,arr+n);
    
    ll arR[n],arL[n],arM[n];
    arR[0]=0;arL[n-1]=0;

    ll hcfR=0,hcfL=0;

    for(i=1;i<=n-2;i++)
    {
        hcfR=gcd(hcfR,arr[i-1]);
        arR[i]=hcfR;

        hcfL=gcd(hcfL,arr[n-i]);
        arL[n-1-i]=hcfL;
    }

    arR[n-1]=gcd(hcfR,arr[n-2]);
    arL[0]=gcd(hcfL,arr[1]);
    
    arM[0]=arL[0];
    arM[n-1]=arR[n-1];    

    ll hcf=0,hcf_i=0;

    for(int i=1;i<=n-2;i++)
    {
        arM[i]=gcd(arL[i],arR[i]);        
    }

    for(int i=0;i<n;i++)
    {
        if(hcf<arM[i])
        {
            hcf=arM[i];hcf_i=i;
        }
        else if(hcf==arM[i] && arr[i]>arr[hcf_i])
        {
            hcf=arM[i];hcf_i=i;
        } 

    }

    
    arr[hcf_i]=hcf;    
    
    for(i=0;i<n;i++)
    result+= (arr[i]/hcf);
    
    cout<<result<<"\n";
    
}

int main(){
    FAST1;
    FAST2;
    ll t;
    
    cin>>t;
    while(t--){
        max();
    }
    
    return 0;
}
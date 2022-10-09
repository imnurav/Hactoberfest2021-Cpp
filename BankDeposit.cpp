#include<iostream>
using namespace std;
class bankdeposit
{
    int principle,year;
    float interestrate,returnvalue;

    public: 
    bankdeposit(){}
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int r);
    void show();
};
bankdeposit::bankdeposit(int p,int y,float r)
{
    principle=p;
    year=y;
    interestrate=r;
    returnvalue=principle;
    for (int i = 0; i <y; i++)
    {
        returnvalue=returnvalue*(1+interestrate);
    }
    
}
bankdeposit::bankdeposit(int p,int y,int r)
{
    principle=p;
    year=y;
    interestrate=float(r)/100;
    returnvalue=principle;
    for (int i = 0; i <y; i++)
    {
        returnvalue=returnvalue*(1+interestrate);
    }
    
}
void bankdeposit:: show()
{
    cout<<endl<<"Principle ammount was:"<<principle<<" Return value after:"<<year<<" year"<<" Is "<<returnvalue<<endl;
}
int main()
{
    bankdeposit bd1,bd2,bd3;
    int p,y,R;
    float r;
    cout<<"Enter your principle ammount: ";
    cin>>p;
    cout<<"Enter Years: ";
    cin>>y;
    cout<<"Enter Rate: ";
    cin>>r;
    bd1=bankdeposit(p,y,r);
    bd1.show();

    cout<<endl<<"Enter your principle ammount: ";
    cin>>p;
    cout<<"Enter Years: ";
    cin>>y;
    cout<<"Enter Rate: ";
    cin>>R;
    bd2=bankdeposit(p,y,R);
    bd2.show();
    return 0;
}

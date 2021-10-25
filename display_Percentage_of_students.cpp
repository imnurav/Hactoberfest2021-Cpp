#include <iostream>

using namespace std;

class student
{
public:

    int m3,os,oops,cao,deld,total;
    float percentage;
    ctotal()
    {
        total=m3+os+oops+cao+deld;
        return total;
    }
    void accept()
    {
        cout<<"enter the marks of m3"<<endl;
        cin>>m3;
        cout<<"enter marks of os"<<endl;
        cin>>os;
        cout<<"enter marks of oops"<<endl;
        cin>>oops;
        cout<<"enter marks of cao"<<endl;
        cin>>cao;
        cout<<"enter marks of deld"<<endl;
        cin>>deld;
        total=ctotal();
    }
    void display()
    {
        cout<<"marks of the m3 are";
        cout<<m3;
        cout<<"marks of the os are";
        cout<<os;
        cout<<"marks of the oops are";
        cout<<oops;
        cout<<"marks of the cao are";
        cout<<cao;
        cout<<"marks of the deld are";
        cout<<deld;
        cout<<"total marks of the student is";
        cout<<total;
        percentage=((total)/500)*100;
        cout<<"percentage is";
        cout<<percentage;
        if(89<percentage<100)
            cout<<"the grade of student is A+";
        else if(79<percentage<90)
            cout<<"the grade of student is A";
        else if(69<percentage<80)
            cout<<"the grade of student is B";
        else if(59<percentage<70)
            cout<<"the grade of student is C";
        else if(49<percentage<60)
            cout<<"the grade of student is D";
        else if(percentage<49)
            cout<<"the grade of student  is F";
    }
};
int main()
{
    int i,n;
    student s[100];
    cout<<"enter the number of student";
    cin>>n;
    for(i=0;i<100;i++)
    s[i].accept();
    s[i].display();
    return 0;
}

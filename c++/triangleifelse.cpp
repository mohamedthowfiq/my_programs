#include<iostream>
using namespace std;
int main()
{
    cout<<"ENTER LENGTH 3 SIDES OF TRIANGLE";
    int a,b,c;
    cin>>a>>b>>c;
    if((a==b)&&(b==c))
    {
        cout<<"you create a equilateral triangle";
    }
     else if(a<b,c)
     {
         cout<<"you create a isoceles triangle";
     }else if(a!=b!=c)
     {
         cout<<"you create a scalene triangle";
     }else 
     {
         cout<<"you creation finished";
     }
     system("pause>0");
}
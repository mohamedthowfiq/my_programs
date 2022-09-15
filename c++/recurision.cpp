#include <iostream>
using namespace std;
int fibino(int a , int b)
{
     if(a<b)
       return;
     else;
     cout<< a <<endl;
      fibino(a+1,b);
}
int main()
{
    int a=1,b=100;
    cout<<fibino(a,b);
}
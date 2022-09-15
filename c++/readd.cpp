/*#include<iostream>
using namespace std;

int recursion_add(int a,int b)
{
   
   if(a==100)
   return 0;
   int c;
   c=a+b;
   cout << c << endl;
   recursion_add(a=c,b);
}
int main()
{
    int a=0,b=1;
    cout<< recursion_add( a, b);
    return 0;
    
}*/




#include<iostream>
using namespace std;

int feb_add(int a,int b)
{
    if(b>100)
    return 0;
    cout<< b <<" ";                                 //0 1= 1 2 =3 5 =8 13 = ......
    feb_add(b,b+a);
    
}
int main()
{
    int a=0,b=1;
    feb_add(a,b);
}
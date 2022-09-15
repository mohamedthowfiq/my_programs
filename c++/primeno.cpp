#include <iostream>
using namespace std;

bool isPrimeNumber(int number)
{
    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        return false;
    }
    return true;
}




int main()
{   
    int counter=0;
    for(int i=1;i<=1000;i++)
    {
      bool isPrime=isPrimeNumber(i);
      if(isPrime) 
            counter=counter + 1;
             cout << i <<"is prime number\n";
    }
    cout << counter << endl;
    
    

     system("pause>0");
}
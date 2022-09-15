#include<iostream>
using namespace std ;
int main()
{  int hostuser , user;
   cout << "enter hostuser number" << endl;
   cin >> hostuser ;
         if ( hostuser >=0 && hostuser<=15)
                   {
                     system ("cls");
                      cout << "enter user number" << endl;
                      cin >> user ;
                      int k = 1;
                      if(k>0||k<3)
                      {
                      
                      if(user==hostuser)
                            {
                                cout << "get in" <<endl;
                            }else{
                                k++;
                            }
                      }else{
                        cout << "chance over"<< endl;
                      }
                      

                    }else
                    {
                        cout << "NOT valid" << endl ;
                    }
                    
   



}
#include<iostream>
using namespace std;
int main(){
           int n;
           cin>>n;
           cout<<n<<endl;
two:        if(n==1)  {
                    
                    return 0;
                   }
         else      {
                    if(n%2==1){
                               n=3*n+1;
                               cout<<n<<endl;
                              }           
                    else      {
                               n=n/2;
                               cout<<n<<endl;
                              }
                    }
goto two;
return 0;
          }
       

           


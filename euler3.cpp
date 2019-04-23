#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
   long long int n=600851475143 ;
   long int max=0;
   int oddno=3;
   while(n%2==0)
   {
     max=n;
     n=n/2;
   }
   while(n!=1)
   {
        while(n%oddno==0)
        {
          max=oddno;
          n=n/oddno;


        }
        oddno+=2;

   }
   cout<<max<<endl;

}

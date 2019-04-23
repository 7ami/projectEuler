#include <iostream>
using namespace std;
int main()
{
   long long int a,b;
   a=1;
   b=2;
   long long int sum=2,c;
   cout<<a<<endl;
   cout<<b<<endl;
   while(b<4000000)
   {
      c=a+b;
      if((c%2)==0)
      {
         sum=sum+c;
      }

      a=b;
      b=c;
   }
   cout<<"Sum: "<<sum<<endl;
   return 0;
   cin.get();




}

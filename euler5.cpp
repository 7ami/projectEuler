#include <iostream>
using namespace std;
int main()
{
    int count=0;
   for(int i=100000;i<=232792560;i++)
   {
         for(int j=1;j<=20;j++)
         {
             if(i%j==0)
             {
                count++;
             }


         }
         if(count==20)
         {
             cout<<i<<endl;
             break;
         }
         count=0;


   }

}

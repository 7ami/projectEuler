#include <iostream>
using namespace std;
int main()
{

    int c=0,d=0;
   for(int i=1;i<1000000;i++)
   {
         for(int j=1;j<=i;j++)
         {
            if(i%j==0)
            {
              c+=1;
            }

         }
         if(c==2)
         {

             d+=1;
         }

         if(d==10001)
         {
            cout<<i<<endl;
            break;
         }
         c=0;

   }
}

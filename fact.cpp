#include <bits/stdc++.h>
using namespace std;
long double fact(int x)
{

    if(x==1)
    {
        return 1;
    }else
    {
        return x*fact(x-1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        cout<<fact(b)<<"\n";
    }
     return 0;
}




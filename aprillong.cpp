#include <bits/stdc++.h>
//#include <vector>
//#include <algorithm>
using namespace std;
/*bool f(long long int x,long long int y)
{

    return x>y;
}*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <long long int> arr;
     long long int a,b;

    cin>>a;
    for( long long int i=0;i<a;i++)
    {

        cin>>b;
        arr.push_back(b);
    }
    sort(arr.begin(),arr.end(),greater<long long int>());
    for(long long int x:arr)
    {
         cout<<x;
    }
    //vector<long long int>::iterator it1=lower_bound(arr.begin(),arr.end(),arr[a-1]);

   //cout<<*(it1-1)<<endl;
    //cout<<((*(it1-1))%(arr[a-1]))<<endl;
    return 0;
    cin.get();





}

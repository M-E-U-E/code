#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    if(n%m==0)
    {
        cout<<n/m<<endl;
    }
    else
    {
        cout<<(n/m)+1<<endl;
    }
}
int main()
{
 //   int t;
   // cin>>t;
    //while(t--)
    {
        solve();

    }
    return 0;
}


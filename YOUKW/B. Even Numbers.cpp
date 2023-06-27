#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }

    }
    if(n==1)
    {
        cout<<-1<<endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   // int t;
  //  cin>>t;
   // while(t--)
    {
        solve();

    }
    return 0;
}


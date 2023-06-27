#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    cout<<1<<endl;
    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   /* int t;
    cin>>t;
    while(t--) */
    {
        solve();

    }
    return 0;
}


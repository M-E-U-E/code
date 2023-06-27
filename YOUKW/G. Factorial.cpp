#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, a=1;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        a=a*i;
    }
    cout<<a<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
   return 0;
}

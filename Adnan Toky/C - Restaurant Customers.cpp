#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, i, a, b;
    cin >> n;
    map<ll,ll>mp;
    for(i=0; i<n; i++)
    {
        cin >> a >> b;
        mp[a]++;
        mp[b]--;

    }
    ll c=0, mx=0;
    for(auto it: mp)
    {
        c += it.second;
        mx = max(mx,c);
    }
    cout << mx << endl;

}
    int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
    {
        solve();

    }
    return 0;
}


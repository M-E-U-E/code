#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n+6], pre[n+6], suf[n+6];
    for(ll i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    ll g=0;
    pre[0]=0;
    for(ll i=1; i<=n; i++)
    {
        g = __gcd(g,a[i]);
        pre[i] = g;
    }
    g=0;
    suf[n+1]=0;
    for(ll i=n; i>=1; i--)
    {
        g = __gcd(g,a[i]);
        suf[i] = g;
    }
    ll ans = 0;
    for(ll i=1; i<=n; i++)
    {
        ans = max(ans, __gcd(pre[i-1], suf[i+1]));
    }
    cout << ans << endl;
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


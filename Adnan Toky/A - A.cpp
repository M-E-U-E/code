#include<bits/stdc++.h>
#define ll long long
using namespace std;

map<ll, ll> mp;
ll c = 0;

void add(ll v)
{
    if(mp[v]==0)
    {
        c++;
    }
    mp[v]++;
}
void rem(ll v)
{
    mp[v]--;
    if(mp[v]==0)
    {
        c--;
    }
}
void solve()
{
    ll n, k, d;
    cin >> n >> k >> d;

    mp.clear();
    c = 0;

    ll a[n+6];
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(ll i=0; i<d; i++)
    {
        add(a[i]);
    }
    ll ans = c;
    for(ll i=d; i<n; i++)
    {
        add(a[i]);
        rem(a[i-d]);
        ans = min(ans,c);
    }
    cout << ans << endl;
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


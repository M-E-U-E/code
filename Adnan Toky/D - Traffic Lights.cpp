#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll x, n;
    cin >> x >> n;
    multiset<ll> ms;
    ms.insert(x);
    set<ll>st;
    st.insert(0);
    st.insert(x);
    for(ll i=0; i<n; i++)
    {
        ll m;
        cin >> m;
        ll pre = *(--st.lower_bound(m));
        ll nxt = *st.upper_bound(m);
        ll len = nxt-pre;
        ms.erase(ms.find(len));
        ms.insert(m-pre);
        ms.insert(nxt-m);

        st.insert(m);

        cout << *(--ms.end()) << " ";
    }
    cout << endl;
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


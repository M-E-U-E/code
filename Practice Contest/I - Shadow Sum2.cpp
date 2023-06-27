#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll t;
    cin >> t;
    for(ll k=1; k<=t; k++)
    {
        ll n, i, c=0;
        cin >> n;
        ll a[n+5],b[n+5];


        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
        set<ll>st;
        for(i=n-1; i>=0; i--)
        {
            if((st.count(a[i])==0) and (st.count(-a[i])==0)){
                st.insert(a[i]);
            }

        }
        vector<ll>v(st.begin(),st.end());


        for(i=0; i<v.size(); i++)
        {
            c += v[i];
        }
        cout << "Case " <<k<< ": " << c << endl;
//        hello
    }



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



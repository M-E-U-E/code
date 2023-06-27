#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll t;
    cin >> t;
    for(ll i=1; i<=t; i++)
    {
        ll x, y, a, b, k, p, q;
        cin >> x >> y >> a >> b;
        cin >> k;
         cout << "Case " << i << ": "<< endl;
        while(k--)
        {
            cin >> p >> q;

            if(p>=x && p<=a && q>=y && q<=b)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }



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




#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll t, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        string s, p;
        cin >> s;
        p = string(s.rbegin(),s.rend());
        if(s==p)
        {
            cout << "Case " << i  <<": Yes" << endl;

        }
        else
        {
            cout << "Case " << i  <<": No" << endl;
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


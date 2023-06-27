#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    double n, r, i, k, x, y, p, a;
    cin >> r;
    p = 2*acos(0.0);
    cerr << p << endl;
    a = r+r;
    x = a*a;
    y = p*r*r;
    cout << fixed << setprecision(2) << x-y << endl;
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


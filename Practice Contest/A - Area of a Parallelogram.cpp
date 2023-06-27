#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll t, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        ll n, x1, y1,  x2, y2, x3, y3, x, y, b, h;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        b = x2-x1;
        h = y3-y2;
        x = x3-b;
        y = y1+y3-y2;
//        cerr << b << " " << h << endl;
ll a;
a = (x1*y2)+(x2*y3)+(x3*y)+(x*y1)-(x1*y)-(x*y3)-(x3*y2)-(x2*y1);
        cout << "Case " << i  <<": " << x << " " << y << " "<<abs(a/2) << endl;

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



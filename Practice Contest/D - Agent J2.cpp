#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll t, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        double r1, r2, r3, a, b, c, s, x, y, z, p, q;
        cin >> r1 >> r2 >> r3;
        a = r1+r2;
        b = r2+r3;
        c = r3+r1;
        double n = b/2;
        double h = sqrt((c*c)-(n*n));
        s = .5*b*h;
//        cerr << s << endl;
        double pi = M_PI;
        x = (pi*r1*r1)/6;
        y = (pi*r2*r2)/6;
        z = (pi*r3*r3)/6;
        p = x+y+z;
//        q = p/6;
        cout << fixed << setprecision(10) << "Case " << i << ": " << s-p << endl;


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





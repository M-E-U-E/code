#include<bits/stdc++.h>
#define ll long long
using namespace std;
double Convert(double degree)
{
    double pi = 3.14159265359;
    return (degree * (pi / 180));
}
void solve()
{
    ll t, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        double r1, r2, r3, a, b, c, s, x, y, z, p, q, d;
        cin >> r1 >> r2 >> r3;
        a = r1+r2;
        b = r2+r3;
        c = r3+r1;
        double n = b/2;
        double h = sqrt((c*c)-(n*n));
//        s = .5*b*h;
        s=a+b+c;
        s /=2;
        cerr << s << endl;
        double pi = M_PI;
//        d = 30*(pi/180);
        d = acos(.5);
        cerr << d << endl;
        x = r1*d;
        y = r2*d;
        z = r3*d;
        p = x+y+z;
        cerr << p << endl;
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




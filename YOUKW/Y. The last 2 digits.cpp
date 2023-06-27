#include<bits/stdc++.h>
using namespace std;
int main ()
{

    long long a, b, c, d, e, f, g, h, x, y;
    cin >> a >> b >> c >> d ;
    e = a%100;
    f = b%100;
    g = c%100;
    h = d%100;
    x = e*f*g*h;
    y = x%100;
    if(y<10)
    {
        cout << "0" << y << endl;
    }
    else
    {
        cout << y << endl;
    }

    return 0;
}

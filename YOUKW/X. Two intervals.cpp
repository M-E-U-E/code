#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b, c, d, x, y;
    cin >> a >> b >> c >> d;
   // if((a<=c && b>=c) && (a<=d && b<=d))
    if(b>=c && d>=b && a<=c)
    {
        cout << c <<" "<< b << endl;
    }
    else if(b>=c && d<=b && a<=c)
    {
        cout << c <<" "<< d << endl;
    }
    else if(a>=c && d<=b && a<=d && c>=b)
    {
        cout << a <<" "<< b << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;

}

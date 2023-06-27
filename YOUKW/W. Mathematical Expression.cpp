#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int a, b, c;
    char x,y;
    cin >> a >> x >> b >> y >> c;
    int p, q, r;
    p = a+b;
    q = a-b;
    r = a*b;
    if(x=='+')
    {
        if(c==p)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<p<<endl;
        }
    }

    else if(x=='-')
    {
        if(c==q)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<q<<endl;
        }
    }
    else if(x=='*')
    {
        if(c==r)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<r<<endl;
        }
    }
    return 0;
}

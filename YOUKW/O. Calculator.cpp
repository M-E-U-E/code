#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a, b, p, q, r, s;
    char x;
    cin >> a >> x >> b;
    p = a+b;
    q = a-b;
    r = a*b;
    s = a/b;
    if(x=='+')
    {
        cout<<p<<endl;
    }
    else if(x=='-')
    {
        cout<<q<<endl;
    }
    else if(x=='*')
    {
        cout<<r<<endl;
    }
    else if(x=='/')
    {
        cout<<s<<endl;
    }
    return 0;
}

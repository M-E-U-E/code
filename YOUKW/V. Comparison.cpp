#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b;
    char x;
    cin >> a >> x >> b;
    if((a>b && x=='>') || (a<b && x=='<') || (a==b && x=='='))
    {
        cout<<"Right"<<endl;
    }
    else
    {
        cout<<"Wrong"<<endl;
    }

    return 0;
}

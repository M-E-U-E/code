#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char y;
    cin >> y;
    int x = y;
    if(x >= 65 && x <= 90)
    {
        x= x+32;
        char a = x;
        cout<<a<<endl;
    }
    else
    {
        char b = x-32;
        cout<<b<<endl;
    }
    return 0;
}

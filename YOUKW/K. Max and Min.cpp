#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = max(a,b);
    int y = max(x,c);
    int p = min(a,b);
    int q = min(p,c);
    cout << q <<" "<< y <<endl;
    return 0;
}

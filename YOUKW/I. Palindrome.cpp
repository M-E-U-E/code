#include<bits/stdc++.h>
using namespace std;
int main ()
{

    string s, p;
    cin >> s;
    p = s;
    reverse(p.begin(),p.end());
    cout << stoi(p) << endl;


    if(s==p)
    {
         cout << "YES" << endl;
    }
    else
    {
         cout << "NO" << endl;
    }
    return 0;
}

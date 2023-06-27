#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll i, j, k, n, x , y;
    cin >> n;
    cout << n << " ";
    vector<ll>v;
    while(n!=1)
    {
        if(n%2==1)
        {
            n = (n*3)+1;
            v.push_back(n);
        }
        else
        {
            n /=2;
            v.push_back(n);
        }
    }
    for(i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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


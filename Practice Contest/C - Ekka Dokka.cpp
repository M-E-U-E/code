#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll t, i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        ll n,  x, y=2;
        cin >> n;
        x = n/2;
        while(x%2 != 1)
        {
            x +=1;
            x /=2;
            y *=2;
        }
//        if(n%40==0)
//        {
//            y += 2;
//        }
        if(x%2==1 && x>1 && n%2==0)
        {
            cout << "Case " << i  <<": " << x << " " << y << endl;
            y=2;
        }

        else
        {
            cout << "Case " << i  <<": Impossible" << endl;
        }
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



#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, i, j, t=0;
    cin >> n >> m;
    if(n>m)
    {
        n=n*3;
        m=m*2;
        t++;
    }
    cout << t << endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t;
    //cin>>t;
    //while(t--)
    {
        solve();

    }
    return 0;
}



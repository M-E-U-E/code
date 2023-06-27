#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n;
    int a[n],b[25]= {0};
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(int i=1; i<=n; i++)
    {
        b[a[i]]++;


    }
    for(int i=1; i<=20; i++)

    {

        for(int j=0; j<b[i];j++)
        {
            cout<<i<< " ";
        }

    }
    // cout<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*   int t;
       cin>>t;
       while(t--) */
    {
        solve();

    }
    return 0;
}



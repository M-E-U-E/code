#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int k, n;
    cin >> n ;
    int a[n+1],b[k+1];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> k;
    for(int j=0;j<k;j++)
    {
        cin >> b[j];
    }
    for(int j=0;j<k;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(b[j]!=a[i])
            {
                cout<<a[i]<<" ";
            }

        }
    }
            cout<<endl;



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}

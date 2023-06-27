#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int m, b, c, e=0, o=0, p=0, n=0;
    cin >> m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<m;i++)
    {
        if(a[i]==0)
        {

        }
       else if(a[i]>0)
        {
            p+=1;
        }
        else
        {
            n+=1;
        }
        if(a[i] % 2==0)
        {
            e+=1;
        }
        else
        {
            o+=1;
        }
    }
    cout << "Even: " << e << endl;
    cout << "Odd: " << o << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << n << endl;

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


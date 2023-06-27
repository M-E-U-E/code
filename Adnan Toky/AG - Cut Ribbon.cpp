#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c, d, n, m, x, y, i, j;
    cin >> n >> a >> b >> c;
    x = INT_MIN;
    for(i=0; i<=4000; i++)
    {
        for(j=0; j<=4000; j++)
        {
            y = n-(a*i)-(b*j);
            if(y<0)
            {
                break;
            }
            double p = (y/(double)c);
            if(p==(int)p)
            {
                m = i+j+p;
                x = max(x,m);
            }
        }
    }
    cout << x << endl;
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

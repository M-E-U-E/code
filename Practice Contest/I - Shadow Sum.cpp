#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll t;
    cin >> t;
    for(ll i=1; i<=t; i++)
    {
        ll n, j, c=0, k, f=0;
        cin >> n;
        ll a[n+5], b[100000],fr[100000];
        memset(fr, 0, sizeof(fr));
        vector<ll>v;
        memset(b, 0, sizeof(b));
        set<ll> st, vt;
        for(j=0; j<n; j++)
        {
            cin >> a[j];
            vt.insert(abs(a[j]));
            fr[abs(a[j])]++;
            if(st.count((a[j]))==0)
            {
                b[j]=a[j];
                v.push_back(a[j]);
                st.insert(a[j]);
            }
        }
        for (auto it = st.begin(); it !=st.end(); ++it)
        {
            cout << ' ' << *it;
        }
//        sort(b, b+n);
//        for(j=0; j<n; j++)
//        {
//            for(k=j+1; k<n; k++)
//            {
//                if(abs(b[j]==b[k]))
//                {
//                    b[j]=0;
//                }
//            }
//        }
//            cerr << b[n-1] << endl;
//        }
//        for(j=0; j<100; j++)
//        {
//            cerr<<fr[j] << " ";
//            if(fr[j]%2==1)
//            {
//                c+=(1*j);
//            }
//            else if(fr[j]%2==0 && fr[j]>0)
//            {
//                 c+=(1*j);
//            }
//        }


        for(j=n-1; j<st.size(); j--)
        {
            if(fr[abs(b[j])]==1)
            {
                c+=b[j];
            }
            fr[abs(b[j])]++;

        }
//        cerr<< vt.size() << endl;
//        set<int>::reverse_iterator rit;
//        for (auto rit = st.rbegin(); rit !=st.rend(); ++rit)
//        {
//            c+= *rit;
//            f++;
//            if(f==vt.size())
//            {
//                break;
//            }
//        }
//        for(k=vt.size()-1; k>=0; k++)
//        {
//            c+=v[i];
//            f++;
//            if(f==vt.size())
//            {
//                break;
//            }
//        }

        cout << "Case " << i << ": " << c << endl;
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




#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[3+2],b[3+2];
    for(int i=0; i<3; i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
     sort(a,a+3);
    for(int i=0; i<3; i++)
    {

        cout<< a[i] << endl;
    }
    cout<<'\n';
    for(int i=0; i<3; i++)
    {
        cout<< b[i]<<endl;
    }

    return 0;
}

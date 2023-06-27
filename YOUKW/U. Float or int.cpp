#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float a, b;
    cin >> a;
    int x = a;
    b = a-x;
    if(b==0)
    {
        cout<<"int "<<x<<endl;
    }
    else
    {
        printf("float %d %.3f",x,b);

    }

    return 0;
}

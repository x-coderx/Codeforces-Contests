#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long res1 = a-1;
        long long res2 = abs(b-c)+c-1;
        if(res1<res2)
            cout<<1<<endl;
        else if(res2<res1)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
    return 0;
}

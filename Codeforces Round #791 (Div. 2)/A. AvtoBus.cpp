#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vt vector
#define ar array
#define pb push_back
#define all(v) v.begin(),v.end()


pair<ll,ll> solve()
{
    ll n;
    cin>>n;
    if(n<4 || n%2)
        return {-1ll,-1ll};
    if(n==4 || n==6)
        return {1ll,1ll};
    int temp1 = n%6, temp2 = n%4;
    unsigned long long min_ = n/6, max_=n/4;
    if(temp1 == 2 || temp1 == 4)
        min_+=1;
    return {min_,max_};
}

int main()
{
    int t;
    cin>>t;
    for(int z = 1;z<=t;z++)
    {
        pair<ll,ll> res = solve();
        if(res.first==-1 || res.second ==-1)
            cout<<-1<<endl;
        else
            cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}


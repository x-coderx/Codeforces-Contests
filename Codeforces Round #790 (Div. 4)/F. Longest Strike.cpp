#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vt vector
#define ar array
#define pb push_back
#define all(v) v.begin(),v.end()


pair<ll,ll> solve()
{
    int n,k;
    cin>>n>>k;
    vector<ll> v(n);
    map<ll,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        m[v[i]]++;
    }
    vector<ll> res;
    for(auto x : m)
    {
        if(x.second>=k)
            res.pb(x.first);
    }

    pair<ll,ll> p = {-1,-1};

    if(res.size())
    {
        ll l = res[0], r = res[0];
        p = {l,r};
        for(int i=1;i<res.size();i++)
        {
            if(res[i]==res[i-1]+1)
                r = res[i];
            else
                l = r = res[i];
            if(r-l > p.second-p.first)
                p = {l,r};
        }
    }
    return p;
}

int main()
{
    int t;
    cin>>t;
    for(int z = 1;z<=t;z++)
    {
        pair<ll,ll> res = solve();
        if(res.second==-1)
            cout<<"-1"<<endl;
        else
            cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}


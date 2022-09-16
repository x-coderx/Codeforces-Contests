#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vt vector
#define ar array
#define pb push_back
#define all(v) v.begin(),v.end()


long long solve()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    ll m = INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        m = min(m,v[i]);
    }
    ll sum = 0ll;
    for(auto x : v)
    {
        sum+=(x-m);
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;
    for(int z = 1;z<=t;z++)
    {
        long long res = solve();
        cout<<res<<endl;
    }
    return 0;
}


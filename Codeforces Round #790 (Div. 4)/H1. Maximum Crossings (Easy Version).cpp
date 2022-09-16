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
    vector<int> v(n+1);
    vector<int> x(n+1,0);
    ll ans = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        ans+=x[v[i]];
        for(int j=v[i];j>0;j--)
        {
            x[j]+=1;
        }
    }
    return ans;
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

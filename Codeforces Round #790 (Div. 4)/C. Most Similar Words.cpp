#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vt vector
#define ar array
#define pb push_back
#define all(v) v.begin(),v.end()


long long solve()
{
    int n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long ans = INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ll temp = 0ll;
            for(int k=0;k<m;k++)
            {
                temp += abs(v[i][k]-v[j][k]);
            }
            ans = min(ans,temp);
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


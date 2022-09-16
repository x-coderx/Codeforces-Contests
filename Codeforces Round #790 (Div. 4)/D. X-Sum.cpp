#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vt vector
#define ar array
#define pb push_back
#define all(v) v.begin(),v.end()

ll check(vector<vector<int> > v, int a, int b, int n, int m)
{
    ll sum = 0ll;
    sum+=v[a][b];
    for(int i=a+1,j=b+1;i<n && j<m;i++,j++)
        sum+=v[i][j];
    for(int i=a-1,j=b-1;i>=0 && j>=0;i--,j--)
        sum+=v[i][j];
    for(int i=a+1,j=b-1;i<n && j>=0;i++,j--)
        sum+=v[i][j];
    for(int i=a-1,j=b+1;i>=0 && j<m;i--,j++)
        sum+=v[i][j];

    return sum;
}

long long solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int> > v(n, vector<int> (m));
    vector<vector<ll> > x(n, vector<ll> (m,0ll));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>v[i][j];
    }
    ll ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            ans = max(ans,check(v,i,j,n,m));
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


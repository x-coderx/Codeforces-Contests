#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vt vector
#define ar array
#define pb push_back
#define all(v) v.begin(),v.end()

vector<int> res;

long long dfs(vector<vector<int> >v, int k, int i, vector<int> x)
{
    if(k==0)
        return 0;
    if(v[i].size()==0)
        return INT_MAX;
    ll max_ = x[i];
    for(int j=0;j<v[i].size();j++)
    {
        max_ = max(max_,dfs(v,k-1,v[i][j],x));
    }
    return max_;
}

long long solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int> > v(n+1);
    vector<int> x(n+1);
    for(int i=1;i<=n;i++)
        cin>>x[i];
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    if(k-1>m)
        return -1;
    for(int i=1;i<=n;i++)
    {
        ll temp = dfs(v,k-1,i,x);
        if(temp!=INT_MAX)
            res.push_back(temp);
    }
    if(res.size()==0)
        return -1;
    return (long long)*min_element(all(res));
}

int main()
{
    cout<<solve();
    return 0;
}


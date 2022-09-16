#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vt vector
#define ar array
#define pb push_back
#define all(v) v.begin(),v.end()



long long solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n+1);
    for(ll i=2;i<=n;i++)
        cin>>v[i];
    v[1] = 1;
    vector<bool> node(n+1,true);
    for(ll i=1;i<=n;i++)
    {
        node[v[i]] = false;
    }
    vector<ll> leaf;
    for(ll i=1;i<=n;i++)
        if(node[i])
            leaf.pb(i);

    vector<int> c(n+1,0);
    string s;
    cin>>s;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='W')
            c[i+1]=1;
        else
            c[i+1]=-1;
    }
    vector<bool> visited(n+1,false);
    ll ans = 0ll;
    for(ll i=0;i<leaf.size();i++)
    {
        int j = leaf[i];
        visited[j] = true;
        int temp = c[j];
        j = v[j];
        while(j!=v[j])
        {
            if(!visited[j])
            {
                c[j]+=temp;
                temp = c[j];
                visited[j] = true;
            }
            else
                c[j]+=temp;
            j=v[j];
        }
        c[j]+=temp;
    }
    for(int i=1;i<=n;i++)
        if(c[i]==0)
            ans++;
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


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vt vector
#define ar array
#define pb push_back
#define all(v) v.begin(),v.end()

int bin(vector<ll> &v, int l, int r, ll t)
{
    int mid = (l+r)/2;
    if(v[mid]==t)
        return mid;
    if(v[mid]>t)
    {
        if(mid==0)
            return mid;
        if(v[mid-1]<t)
            return mid;
        else
            return bin(v,l,mid-1,t);
    }
    if(l==r)
        return -1;
    return bin(v,mid+1,r,t);
}

void solve()
{
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(all(v));
    reverse(all(v));
    for(int i=1;i<n;i++)
    {
        v[i]+=v[i-1];
    }
    for(int i=0;i<q;i++)
    {
        ll temp;
        cin>>temp;
        int res = bin(v,0,n-1,temp);
        cout<<(res==-1?res:res+1)<<endl;
    }
    return;
}

int main()
{
    int t;
    cin>>t;
    for(int z = 1;z<=t;z++)
    {
        solve();
    }
    return 0;
}


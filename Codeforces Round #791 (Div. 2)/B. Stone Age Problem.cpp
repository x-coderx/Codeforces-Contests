#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vt vector
#define ar array
#define pb push_back
#define all(v) v.begin(),v.end()


void solve()
{
    int n,q;
    cin>>n>>q;
    vector<ll> v(n+1);
    ll sum  =0ll;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    bool flag = false;
    ll temp;
    vector<pair<int,int> > p;
    for(int i=1;i<=q;i++)
    {
        int code;
        cin>>code;
        if(code==1)
        {
            int j;
            ll x;
            cin>>j>>x;
            if(flag)
            {
                bool check = false;
                for(int k=0;k<p.size();k++)
                {
                    if(p[k].first==j)
                    {
                        sum-=p[k].second;
                        check = true;
                        break;
                    }
                }
                if(!check)
                    sum-=temp;
                sum+=x;
                p.push_back({j,x});
            }
            else
            {
                sum-=v[j];
                sum+=x;
                v[j] = x;
            }
        }
        else
        {
            ll x;
            cin>>x;
            sum = x*n;
            flag = true;
            temp = x;
            p.clear();
        }
        cout<<sum<<endl;
    }
    return;
}

int main()
{
    solve();
    return 0;
}


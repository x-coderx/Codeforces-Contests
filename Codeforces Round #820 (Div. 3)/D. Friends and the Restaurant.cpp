#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll,ll> p1, pair<ll,ll> p2)
{
    return p1.second-p1.first > p2.second-p2.first;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<ll,ll>> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first;
        }
        for(int i=0;i<n;i++)
            cin>>v[i].second;
        sort(v.begin(),v.end(),cmp);
        int i=0,j=n-1,res=0;
        while(i<j)
        {
            int d1 = v[i].second-v[i].first;
            int d2 = v[j].second-v[j].first;
            if(d1+d2>=0)
            {
                res++;
                i++;
                j--;
            }
            else
                j--;
        }
        cout<<res<<endl;
    }
    return 0;
}

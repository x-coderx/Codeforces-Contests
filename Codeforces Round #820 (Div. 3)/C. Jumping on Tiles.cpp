#include<bits/stdc++.h>
using namespace std;

bool cmp1(pair<int,char>& p1, pair<int,char>& p2)
{
    if(p1.second==p2.second)
        return p1.first<=p2.first;
    return p1.second<p2.second;
}

bool cmp2(pair<int,char>& p1, pair<int,char>& p2)
{
    if(p1.second==p2.second)
        return p1.first<=p2.first;
    return p1.second>p2.second;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char f = s[0], l = s[s.length()-1];
        vector<pair<int,char> > m;
        for(int i=0;i<s.length();i++)
            m.push_back({i+1,s[i]});
        if(f<=l)
            sort(m.begin(),m.end(),cmp1);
        else
            sort(m.begin(),m.end(),cmp2);
        vector<int> res;
        int count = 0;
        for(auto itr = m.begin();itr!=m.end();itr++)
        {
            if(itr->second==f)
            {
                while(itr->second!=l && itr!=m.end())
                {
                    res.push_back(itr->first);
                    count++;
                    itr++;
                }
                while(itr->second==l && itr!=m.end())
                {
                    res.push_back(itr->first);
                    count++;
                    itr++;
                }
                break;
            }
        }
        cout<<abs(f-l)<<" "<<count<<endl;
        for(auto x : res)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}

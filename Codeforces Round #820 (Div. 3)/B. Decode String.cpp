#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string res = "";
        for(int i=n-1;i>=0;i--)
        {
            int num;
            if(s[i]=='0')
            {
                num = stoi(s.substr(i-2,2));
                i-=2;
            }
            else
            {
                num = stoi(s.substr(i,1));
            }
            num--;
            char x = 'a'+num;
            res+=x;
        }
        reverse(res.begin(),res.end());
        cout<<res<<endl;
    }

    return 0;
}

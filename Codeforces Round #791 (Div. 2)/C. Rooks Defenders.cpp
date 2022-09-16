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
    vector<int> x(n+1,0);
    vector<int> y(n+1,0);
    for(int i=1;i<=q;i++)
    {
        int code;
        cin>>code;
        if(code==1)
        {
            int a,b;
            cin>>a>>b;
            x[a]++;
            y[b]++;
        }
        else if(code == 2)
        {
            int a,b;
            cin>>a>>b;
            x[a]--;
            y[b]--;
        }
        else
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if(a>c)
                swap(a,c);
            if(b>d)
                swap(b,d);
            bool temp1 = true,temp2=true;
            for(int j=0;j<=(c-a)/2;j++)
            {
                if(x[j+a]==0 || x[c-j]==0)
                {
                    temp1=false;
                    break;
                }
            }
            for(int j=0;j<=(d-b)/2;j++)
            {
                if(y[j+b]==0 || y[d-j]==0)
                {
                    temp2 = false;
                    break;
                }
            }
            temp1 = temp1 || temp2;
            cout<<(temp1?"Yes":"No")<<endl;
        }
    }
    return;
}

int main()
{
    solve();
    return 0;
}


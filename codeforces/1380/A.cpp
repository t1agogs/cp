#include <bits/stdc++.h>

using namespace std;

void solve()
{
        int n;
        vector<int> p,sol;
        vector<pair<int,int> > pos;
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            p.push_back(num);
        }
        
        for(int i=1;i<n-1;i++)
        {
            if(p[i] > p[i-1] && p[i]>p[i+1])
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                return;
            }
        }
        
        cout<<"NO"<<endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    while(t--)
    {
        solve();
    }
    
  return 0;
}
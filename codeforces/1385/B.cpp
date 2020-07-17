#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    while(t--)
    {
        vector<int> result,x;
        int num,n;
        cin>>n;
        for(int i=0;i<n*2;i++)
        {
                if(i==0)
                {
                    cin>>num;
                    x.push_back(num);    
                }
                else
                {
                    cin>>num;
                    if(find(x.begin(),x.end(),num) == x.end())
                    {
                        x.push_back(num);
                    }
                }
        }
        
        for(auto s: x)
        {
            cout<<s<<" ";
        }
        
        cout<<endl;
    }
    
  return 0;
}
#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()
 
using namespace std;

bool check(int x)
{
    bool works=true,start=false;
    for(int i=19;i>=0;i--)
    {
        if(x&(1<<i))
            start=true;
        
        if(!(x&(1<<i)) && start)
            works=false;
    }
    
    if(x==0)
        return true;
    
    return works;
}

void solve(/*int caseN*/)
{
    int x; cin>>x;
    vector<int> xorcnt;
    int cnt=1;
    while(!check(x))
    {
        if(cnt%2)
        {
            bool start=false;
            for(int i=19;i>=0;i--)
            {
                if(x&(1<<i))
                    start=true;
                    
                if(!(x&(1<<i)) && start)
                {
                    x^=(1<<i+1)-1;
                    xorcnt.emplace_back(i+1);
                    break;
                }
            }
            
            cnt++;
        }
        else
        {
            x++,cnt++;
        }
    }
    cout<<cnt-1<<nl;
    
    if(xorcnt.size()>0)
    {
        for(auto x:xorcnt)
            cout<<x<<" ";
    }
}
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	//int T; cin>>T;
	//while(T--)
		solve(/*T*/);
}
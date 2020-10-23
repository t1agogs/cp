#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

vector<vector<int>> graph(100001);
vector<int> vis(100001);

void dfs(int v)
{
    vis[v]=1;
    for(auto child: graph[v])
    {
        if(vis[child]==0)
            dfs(child);
    }
}

void solve(int caseN)
{
	    int x; cin>>x;
	    
	    int n=(x%10)*10;
	    
	    int digits=0,i=0;
	    while(x > 0)
	    {
	        digits+=i+1;
	        x/=10;
	        i++;
	    }
	    cout<<n-(10-(digits))<<nl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
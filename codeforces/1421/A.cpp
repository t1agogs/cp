#include <bits/stdc++.h>

#define nl "\n"
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;
 
vector<vector<int>> graph(100000);
vector<int> vis(100000);
 
long long min_gold=1e9+5;
void dfs(int v, vector<long long> &cost)
{
    vis[v]=1;
    min_gold=min(min_gold,cost[v]);
    for(auto child: graph[v])
    {
        if(vis[child]==0)
            dfs(child,cost);
    }
}
 
void solve(int caseN)
{
	    long long A,B; cin>>A>>B;
	    
	    cout<<(long long)((A^(A&B))+(B^(A&B)))<<nl;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T);
}
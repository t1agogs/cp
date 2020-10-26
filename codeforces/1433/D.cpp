#include <bits/stdc++.h>

#define nl "\n"
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;
 
vector<vector<int>> graph(100000);
vector<int> vis(100000);

void dfs(int v)
{
    vis[v]=1;
    for(auto child: graph[v])
        if(vis[child]==0)
            dfs(child);
}
 
void solve(int caseN)
{
	int N; cin>>N;
	
	vector<int> a(N);
	vector<pair<int,int>> res;
	
	for(auto &x:a) cin>>x;
	
	int index=-1;
	for(int i=1;i<N;i++)
	{
		if(a[i]!=a[0])
		{
			res.push_back({1,i+1});
			index=i;
		}
	}
	
	if(index==-1)
		cout<<"NO"<<nl;
	else
	{
		cout<<"YES"<<nl;
		for(int i=1;i<N;i++)
		{
			if(a[i]==a[0])
				res.push_back({index+1,i+1});
		}
		
		for(int i=0;i<N-1;i++)
		{
			cout<<res[i].first<<" "<<res[i].second<<nl;
		}
	}
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T);
}
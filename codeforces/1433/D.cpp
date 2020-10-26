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
	
	for(auto &x:a) cin>>x;
	
	auto it1=max_element(a.begin(),a.end());
	auto it2=min_element(a.begin(),a.end());
	
	if(*it1==*it2)
		cout<<"NO"<<nl;
	else
	{
		cout<<"YES"<<nl;
		int p1=it1-a.begin();
		int p2=it2-a.begin();
		for(int i=0;i<N;i++)
		{
			if(i==p1) continue;
			cout<<i+1<<" ";
			if(a[i]==a[p1])
				cout<<p2+1<<nl;
			else
				cout<<p1+1<<nl;
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
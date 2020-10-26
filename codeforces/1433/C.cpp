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
	vector<int> initial(N);
	
	for(int i=0;i<N;i++)
	{
		int x; cin>>x;
		a[i]=x;
		initial[i]=x;
	}
	
	sort(all(a));
	
	if(a[0]==a[N-1])
		cout<<-1<<nl;
	else
	{
		for(int i=0;i<N;i++)
		{
			if(initial[i]==a[N-1] && ((i+1 < N && initial[i+1] < initial[i]) || (i-1>=0 && initial[i-1] < initial[i])))
			{
				cout<<i+1<<nl;
				break;
			}
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
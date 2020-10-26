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
	
	vector<int> a(N),initial(N);
	map<int,int> cnt;
	
	for(int i=0;i<N;i++)
	{
		int x; cin>>x;
		cnt[x]++;
		a[i]=x;
		initial[i]=x;
	}
	
	sort(all(a));
	
	if(a[0]==a[N-1])
	{
		cout<<"NO"<<nl;
		return;
	}
	else
	{
		cout<<"YES"<<nl;
		
		int least=1e9,index=1;
		for(auto x: cnt)
		{
			if(x.second>0 && x.second<least)
			{
				least=x.second;
				index=x.first;
			}
		}
		
		int start=0;
		for(int i=0;i<N;i++)
			if(initial[i]==index)
			{
				start=i;
				break;
			}
		
		int helper=0;	
		for(int i=0;i<N;i++)
		{
			if(initial[i]!=index)
			{
				cout<<start+1<<" "<<i+1<<nl;
				helper=i;
			}
		}
		
		for(int i=start+1;i<N;i++)
		{
			if(initial[i]==index)
				cout<<i+1<<" "<<helper+1<<nl;
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
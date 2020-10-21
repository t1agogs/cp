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
	    
	    char check[4];
	    
	    for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
			{
				char c; cin>>c;
				if(i==0 && j==1) check[0]=c;
				if(i==1 && j==0) check[1]=c;
				if(i==N-2 && j==N-1) check[2]=c;
				if(i==N-1 && j==N-2) check[3]=c; 
			}
			
		if(check[0]==check[1])
		{
			if(check[2]==check[3])
			{
				if(check[0]==check[2])
				{
					cout<<2<<nl;
					cout<<N-1<<" "<<N<<nl;
					cout<<N<<" "<<N-1<<nl;
					return;
				}
				else
				{
					cout<<0<<nl;
					return;
				}
			}
			else
			{
				if(check[0]==check[2])
				{
					cout<<1<<nl;
					cout<<N-1<<" "<<N<<nl;
					return;
				}
				else
				{
					cout<<1<<nl;
					cout<<N<<" "<<N-1<<nl;
					return;
				}
			}
		}
		else
		{
			if(check[2]==check[3])
			{
				if(check[0]==check[2])
				{
					cout<<1<<nl;
					cout<<1<<" "<<2<<nl;
					return;
				}
				else
				{
					cout<<1<<nl;
					cout<<2<<" "<<1<<nl;
					return;
				}
			}
			else
			{
				if(check[0]==check[3])
				{
					cout<<2<<nl;
					cout<<2<<" "<<1<<nl;
					cout<<N<<" "<<N-1<<nl;
					return;
				}
				else
				{
					cout<<2<<nl;
					cout<<2<<" "<<1<<nl;
					cout<<N-1<<" "<<N<<nl;
					return;
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
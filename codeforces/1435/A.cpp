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
    int N; cin>>N;
    
    vector<int> a(N);
    
    for(auto &x:a) cin>>x;
    
    for(int i=0;i<N;i+=2)
    {
        cout<<-a[i+1]<<" "<<a[i]<<" ";
    }
    cout<<nl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
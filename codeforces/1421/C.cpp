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
 
void solve(/*int caseN*/)
{
	string s; cin>>s;
	string rev=s;
	reverse(rev.begin(),rev.end());
	
	if(rev==s)
	{
		cout<<0;
		return;
	}
	else
	{
		cout<<3<<nl;
		cout<<"R"<<" "<<s.length()-1<<nl;
		cout<<"L"<<" "<<s.length()<<nl;
		cout<<"L"<<" "<<2<<nl;
	}
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}
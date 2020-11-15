#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;
 
void solve(int caseN)
{
	ll N,W; cin>>N>>W;
	
	vector<pair<int,int>> a(N);
	for(int i=0;i<N;i++)
	{
		int x; cin>>x;
		a[i]=make_pair(x,i+1);
	}
	
	sort(allr(a));
	vector<int> res;
	ll copy=W;
	for(int i=0;i<N;i++)
	{
		if(a[i].first <= copy)
		{
			copy-=a[i].first;
			res.push_back(a[i].second);
		}
		
		if(copy <= W/2)
		{
			cout<<res.size()<<nl;
			for(auto x: res)
				cout<<x<<" ";
			cout<<nl;
			return;
		}
	}
	cout<<-1<<nl;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T);
}
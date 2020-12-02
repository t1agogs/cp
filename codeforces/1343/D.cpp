#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

void solve(int caseN)
{
	ll N,k; cin>>N>>k;
	
	vector<ll> a(N);
	
	for(auto &x:a) cin>>x;
	
	vector<pair<ll,ll>> pairs(N/2);
	
	for(int i=0;i<N/2;i++)
	{
		pairs[i]=make_pair(min(a[i],a[N-i-1]),max(a[i],a[N-i-1]));
	}
	
	vector<ll> pre(2*k+1);
	map<ll,ll> m;
	
	for(auto p: pairs)
	{
		m[p.first+p.second]++;
		pre[p.first+1]+=1;
		if(p.second+k<2*k)
			pre[p.second+k+1]-=1;
	}
	
	for(int i=2;i<=2*k;i++)
	{
		pre[i]=pre[i-1]+pre[i];
	}
	
	ll ans=N;
	for(int i=2;i<=2*k;i++)
	{
		ll cnt1 = m[i];
		ll cnt2 = pre[i]-cnt1;
		ll cnt3 = (N/2)-pre[i];
		ll total = cnt2+2*cnt3;
		ans=min(ans,total);
	}
	
	cout<<ans<<nl;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	int T; cin>>T;
	while(T--)
	    solve(T);
}

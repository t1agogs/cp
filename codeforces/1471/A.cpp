#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()
 
using namespace std;

void solve(int caseN)
{
	ll N,x; cin>>N>>x;
	vector<ll> a(N); for(auto &x:a) cin>>x;
	
	ll sum=0;
	ll ans1=0;
	for(int i=0;i<N;i++)
	{
		ans1+=(ll)ceil((double)a[i]/x);
		sum+=a[i];
	}
	cout<<(ll)ceil((double)sum/x)<<" "<<ans1<<nl;
}
 
int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	while(T--)
		solve(T);
}
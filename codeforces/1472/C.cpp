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
	int N; cin>>N;
	
	vector<ll> a(N); for(auto &x:a) cin>>x;
	vector<ll> dp(N);
	
	for(int i=N-1;i>=0;i--)
	{
		if(i+a[i] < N)
			dp[i]+=dp[i+a[i]];
		dp[i]+=a[i];
	}
	
	cout<<*max_element(all(dp))<<nl;
}
 
int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	while(T--)
		solve(T);
}
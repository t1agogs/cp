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
	
	sort(allr(a));
	
	ll alice=0,bob=0;
	
	for(int i=0;i<N;i++)
	{
		if(i%2==0 && a[i]%2==0)
			alice+=a[i];
		
		if(i%2==1 && a[i]%2==1)
			bob+=a[i];
	}
	
	if(alice==bob)
	{
		cout<<"Tie"<<nl;
		return;
	}
	
	cout<<(alice>bob?"Alice":"Bob")<<nl;
	
}
 
int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	while(T--)
		solve(T);
}
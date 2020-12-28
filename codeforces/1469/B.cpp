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
	vector<int> a(N); for(auto &x:a) cin>>x;
	int M; cin>>M;
	vector<int> b(M); for(auto &x:b) cin>>x;
	
	int ansA=0,ansB=0,curr=0;
	for(int i=0;i<N;i++)
	{
		curr+=a[i];
		ansA=max(ansA,curr);
	}
	
	curr=0;
	for(int i=0;i<M;i++)
	{
		curr+=b[i];
		ansB=max(ansB,curr);
	}
	cout<<ansA+ansB<<nl;
}
 
int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	while(T--)
		solve(T);
}
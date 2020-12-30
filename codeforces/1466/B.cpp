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
	vector<int> a(N);
	map<int,int> mp;
	for(int i=0;i<N;i++)
		cin>>a[i],mp[a[i]]++;
		
	int sum=0;
	for(int i=N-1;i>=0;i--)
	{
		if(mp[a[i]+1] == 0)
			mp[a[i]]--,a[i]+=1,mp[a[i]]++;
	}
	
	for(auto x:mp)
		if(x.second>0) sum++;
		
	cout<<sum<<nl;
}
 
int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	while(T--)
		solve(T);
}
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
	
	map<double,int> mp;
	int sum=0;
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			double s=(double)abs(a[j]-a[i])/2;
			if(mp[s]==0)
				sum++,mp[s]++;
		}
	}
	cout<<sum<<nl;
}
 
int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	while(T--)
		solve(T);
}
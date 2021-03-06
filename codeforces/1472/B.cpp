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
	
	int sum=0,cnt=0;
	for(int i=0;i<N;i++)
	{
		sum+=a[i];
		if(a[i]==2)
			cnt++;
	}
	
	if(sum&1)
	{
		cout<<"NO"<<nl;
		return;
	}
	
	if(cnt==N && cnt%2==1)
	{
		cout<<"NO"<<nl;
		return;
	}
	
	cout<<"YES"<<nl;
}
 
int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	while(T--)
		solve(T);
}
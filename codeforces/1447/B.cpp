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
	int N,M; cin>>N>>M;
	
	vector<vector<int>> a(N,vector<int>(M));
	int cnt=0;
	int minN=1e9;
	int totalCount=0;
	int countN=0;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			int x; cin>>x;
			totalCount+=abs(x);
			minN=min(minN,abs(x));
			if(x<0) countN++;
			if(x==0) cnt++;
		}
	}
	
	if(cnt > 0 || countN%2==0)
	{
		cout<<totalCount<<nl;
		return;
	}
	
	if(countN==0 || (countN==(N*M)&& N%2==0 && M%2==0))
	{
		cout<<totalCount<<nl;
		return;
	}
	
	cout<<totalCount+(-2*minN)<<nl;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T);
}
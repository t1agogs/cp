#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<long long>> x(N,vector<long long>(M))

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

void solve(/*int caseN*/)
{
	ll a,b; cin>>a>>b;
	
	int ans=0;
	for(int i=61;i>=0;i--)
	{
		ll curr=(1LL<<i)-1;
		for(int j=60;j>=0;j--)
		{
			if((curr^(1LL<<j))==(curr/2) || (curr^(1LL<<j)) > curr)
				continue;
			ll check=curr^(1LL<<j);
			if(check>=a && check<=b && check!=curr)
				ans++;
		}
	}
	cout<<ans;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}

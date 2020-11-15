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
	int N; cin>>N;
	
	cout<<N<<nl;
	for(int i=1;i<=N;i++)
	{
		cout<<i<<" ";
	}
	cout<<nl;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T);
}
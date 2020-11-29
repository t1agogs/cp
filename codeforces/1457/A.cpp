#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

void solve(int caseN)
{
	long long N,M,r,c; cin>>N>>M>>r>>c;
	
	cout<<max(max((N-r+M-c),N-r+abs(1-c)),max(abs(1-r)+abs(1-c),abs(1-r)+M-c))<<nl;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	int T; cin>>T;
	while(T--)
	    solve(T);
}

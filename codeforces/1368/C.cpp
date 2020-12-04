#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

void solve(/*int caseN*/)
{
	int N; cin>>N;
	
	cout<<8+(3*(N-2))+2<<nl;
	cout<<0<<" "<<0<<nl;
	cout<<1<<" "<<0<<nl;
	cout<<0<<" "<<1<<nl;
	cout<<1<<" "<<1<<nl;
	cout<<2<<" "<<1<<nl;
	cout<<1<<" "<<2<<nl;
	
	pair<int,int> last;
	
	last={1,2};
	
	for(int i=1;i<N;i++)
	{
		cout<<last.first+1<<" "<<last.second<<nl;
		cout<<last.first+2<<" "<<last.second<<nl;
		cout<<last.first+1<<" "<<last.second+1<<nl;
		last={last.first+1,last.second+1};
	}
	
	cout<<last.first+1<<" "<<last.second<<nl;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}
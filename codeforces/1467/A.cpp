#include <bits/stdc++.h>
 
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
 
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
	
	if(N==1)
	{
		cout<<9<<nl;
		return;
	}
	
	cout<<98;
	
	int start=9;
	for(int i=2;i<N;i++)
	{
		cout<<start;
		start++;
		start%=10;
	}
	cout<<nl;
}
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int T; cin>>T;
    while(T--)
        solve(T);
}
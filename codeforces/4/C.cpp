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
	
	map<string,int> m;
	
	for(int i=0;i<N;i++)
	{
		string s; cin>>s;
		if(m[s]==0)
		{
			cout<<"OK"<<nl;
			m[s]++;
		}
		else
		{
			cout<<s+to_string(m[s])<<nl;
			m[s]++;
		}
	}
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}
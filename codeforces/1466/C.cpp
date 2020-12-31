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
	string s; cin>>s;
	int N=s.length();
	
	int ans=0;
	for(int i=0;i<N;i++)
	{
	    if(s[i]=='#')
	        continue;
	    if(s[i]==s[i+1])
	    {
	        s[i+1]='#';
	    }
	    if(s[i]==s[i+2])
	    {
	        s[i+2]='#';
	    }
	}
	
	//if(s[N-1]==s[N-2])
	    //s[N-2]='#';
	    
	for(int i=0;i<N;i++)
	    if(s[i]=='#')
	        ans++;
	
	cout<<ans<<nl;
}
 
int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	while(T--)
		solve(T);
}
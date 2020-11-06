#include <bits/stdc++.h>
 
#define nl "\n"
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;
 
void solve(/*int caseN*/)
{
	//freopen("gymnastics.in","r",stdin);
	//freopen("gymnastics.out","w",stdout);
	
	int N,M; cin>>N>>M;
	string s; cin>>s;
	
	for(int i=0;i<M;i++)
	{
		int l,r; 
		char c1,c2;
		cin>>l>>r>>c1>>c2;
		
		for(int i=l-1;i<r;i++)
			if(s[i]==c1) s[i]=c2;
	}
	
	cout<<s;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}
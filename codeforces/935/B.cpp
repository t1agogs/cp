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
	
	int N; cin>>N;
	string s; cin>>s;
	
	int ans=0;
	int countera=0,counterb=0;
	char last='@';
	for(int i=0;i<N;i++)
	{
		if(s[i]=='U')
		{
			if(countera==counterb && last=='U') ans++;
			countera++;
			last='U';
		}
		else
		{
			if(countera==counterb && last=='R') ans++;
			counterb++;
			last='R';
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
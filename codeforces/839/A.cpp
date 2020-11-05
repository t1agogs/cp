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
	
	int N,K; cin>>N>>K;
	
	long long ans=0;
	long long left=0;
	for(int i=0;i<N;i++)
	{
		int x; cin>>x;
		int cur=min(x+left,(long long)8);
		ans+=cur;
		left=x+left-cur;
		
		if(ans>=K)
		{
			cout<<i+1;
			return;
		}
	}
	cout<<-1;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}

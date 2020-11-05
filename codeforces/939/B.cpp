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
	
	long long N,K; cin>>N>>K;
	
	long long ans=0;
	int type=1;
	long long res=1;
	for(int i=0;i<K;i++)
	{
		long long x; cin>>x;
		if(ans < (N/x)*x)
		{
			ans=(N/x)*x;
			res=x;
			type=i+1;
		}
	}
	
	cout<<type<<" "<<ans/res;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}

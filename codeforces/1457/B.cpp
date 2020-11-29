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
	long long N,k; cin>>N>>k;
	
	vector<int> cnt(101);
	vector<int> a(N);
	
	for(int i=0;i<N;i++)
	{
		int x; cin>>x;
		cnt[x]++;
		a[i]=x;
	}
	
	long long ans=1e9;
	for(long long i=0;i<101;i++)
	{
		if(cnt[i]==0) continue;
		
		int total=N-cnt[i];
		
		long long cur=0;
		for(int j=0;j<N;j++)
		{
			if(a[j]!=i)
			{
				int bound=(j+k<N?j+k:N);
				for(int l=j;l<bound;l++)
				{
					if(a[l]!=i) total--;
				}
				j=bound-1;
				cur++;
			}
			
			if(total==0)
				break;
		}
		ans=min(ans,cur);
	}
	
	cout<<ans<<nl;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	int T; cin>>T;
	while(T--)
	    solve(T);
}
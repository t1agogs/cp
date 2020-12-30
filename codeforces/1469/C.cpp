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
	int N,k; cin>>N>>k;
	vector<int> a(N); for(auto &x:a) cin>>x;
	
	int minN=a[0],maxN=a[0];
	for(int i=1;i<N-1;i++)
	{
		minN=max(a[i],minN-k+1);
		maxN=min(a[i]+k-1,maxN+k-1);
		
		if(minN > maxN)
		{
			puts("NO");
			return;
		}
	}
	
	if(maxN+k > a[N-1] && minN < a[N-1]+k)
		puts("YES");
	else puts("NO");
}
 
int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	while(T--)
		solve(T);
}
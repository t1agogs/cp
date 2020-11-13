#include <bits/stdc++.h>
 
#define nl "\n"
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;
 
void solve(int caseN)
{
	int N,K; cin>>N>>K;
	
	vector<int> a(N),b(N);
	
	for(auto &x:a) cin>>x;
	for(auto &x:b) cin>>x;
	
	bool works=true;
	for(int i=0;i<N;i++)
	{
		if(a[i]+b[N-i-1] > K)
			works=false;
	}
	
	if(works) puts("Yes");
	else puts("No");
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T);
}

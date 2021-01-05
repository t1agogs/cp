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
	int N,k; cin>>N>>k;
	
	vector<int> a(N);
	vector<int> b(k);
	
	for(int i=0;i<N;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<k;i++)
		scanf("%d",&b[i]);
	
	sort(allr(a));
	
	int last=0;
	ll ans=0;
	for(int i=0;i<N;i++)
	{
		if(b[last]<b[a[i]-1])
		{
			ans+=b[last];
			last++;
		}
		else ans+=b[a[i]-1];
	}
	
	cout<<ans<<nl;
}
 
int main()
{
    //ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
    
    int T; cin>>T;
    while(T--)
        solve(T);
}
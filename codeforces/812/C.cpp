#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()
 
using namespace std;

bool checks(int mid,vector<ll> a,int s)
{
	int N=a.size();
	for(int i=0;i<N;i++)
		a[i]+=(ll)(i+1)*mid;
		
	sort(all(a));
	
	ll count=0;
	for(int i=0;i<mid;i++)
		count+=a[i];
		
	return (count<=s?true:false);
}
 
void solve(/*int caseN*/)
{
	int N,s; cin>>N>>s;
	
	vector<ll> a(N); for(auto &x:a) cin>>x;
	
	ll l=0,r=N,ans=-1;
	while(l<=r)
	{
		ll mid=l+(r-l)/2;
		
		if(checks(mid,a,s))
			ans=mid,l=mid+1;
		else r=mid-1;
	}
	
	for(ll i=0;i<N;i++)
		a[i]+=(i+1)*ans;
		
	sort(all(a));
	ll res=0;
	for(int i=0;i<ans;i++)
		res+=a[i];
	
	cout<<ans<<" "<<res;
}
 
int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	//int T; cin>>T;
	//while(T--)
		solve(/*T*/);
}
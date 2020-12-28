#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()
 
using namespace std;

ll checks(int mid,vector<ll> a,int s)
{
	int N=a.size();
	vector<ll> b(N);
	for(int i=0;i<N;i++)
		b[i]+=a[i]+(ll)(i+1)*mid;
		
	sort(all(b));
	
	ll ans=0;
	for(int i=0;i<mid;i++)
		ans+=b[i];
	
	if(ans<=s) return ans;
	else return -1;
}
 
void solve(/*int caseN*/)
{
	int N,s; cin>>N>>s;
	
	vector<ll> a(N); for(auto &x:a) cin>>x;
	
	ll l=0,r=N,ans=-1,minN=0;
	while(l<=r)
	{
		ll mid=l+(r-l)/2;
		
		ll temp=checks(mid,a,s);
		if(temp!=-1)
			ans=mid,l=mid+1,minN=temp;
		else r=mid-1;
	}
	
	cout<<ans<<" "<<minN;
}
 
int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	//int T; cin>>T;
	//while(T--)
		solve(/*T*/);
}
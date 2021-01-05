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
	ll N,x; cin>>N>>x;
	
	vector<ll> a(N); for(auto &x:a) cin>>x;
	vector<pair<ll,ll>> extra;
	bool check=true;
	ll ans=0;
	for(int i=0;i<N;i++)
	{
		if(a[i]%x==0)
		{
			extra.push_back({a[i],x});
		}
		else
		{
			check=false;
			break;
		}
	}
	
	for(int i=0;i<N;i++)
		ans+=a[i];
		
	if(check)
	{
		for(int i=0;i<(int)extra.size();i++)
		{
			if((extra[i].first/extra[i].second)%x==0)
			{
				extra.push_back({extra[i].first,extra[i].second*=x});
			}
			else
			{
				break;
			}
		}
	}
	
	int N2=extra.size();
	for(int i=0;i<N2;i++)
		ans+=extra[i].first;
	
	cout<<ans<<nl;
	
}
 
int main()
{
    ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
    
    int T; cin>>T;
    while(T--)
        solve(T);
}
#include <bits/stdc++.h>

#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()

using namespace std;

void solve(/*int caseN*/)
{
	int N,q; cin>>N>>q;
	vector<ll> a(N),b(q); 
	
	for(int i=0;i<N;i++)
	{
	    cin>>a[i];
	    if(i>0)
	        a[i]=a[i-1]+a[i];
	}
	
	for(auto &x:b) cin>>x;
	
	//vector<ll> copy=b;
	ll target=0;		
	for(int i=0;i<q;i++)
	{
		target+=b[i];
		
		int ind=lower_bound(all(a),target)-a.begin();
		
		if(ind>=N || (ind==N-1 && a[ind]-target==0))
		{
			cout<<N<<nl;
			target=0;
		}
		else
		{
			//+1<q?b[i+1]+=b[i]:false;
			cout<<(a[ind]-target==0?N-(ind+1):N-ind)<<nl;
		}
	}
}

int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	//int T; cin>>T;
	//while(T--)
		solve(/*T*/);
}
#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;
 
void solve(int caseN)
{
	long long p,q; cin>>p>>q;
	
	if(p%q)
	{
		cout<<p<<nl;
	}
	else
	{
		long long x=1;
		for(int i=1;i*i<=q;++i)
		{
			if(q%i==0)
			{
				long long np=p;
				if(i > 1)
				{
					while(np%q==0)
					np/=i;
					
					x=max(x,np);
				}
				
				np=p;
				while(np%(q/i)==0)
					np/=(q/i);
					
				x=max(x,np);
			}
		}
		cout<<x<<nl;
	}
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T);
}

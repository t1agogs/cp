#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(),v.end()
#define FOR(i,k,n) for(int i=k;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	
	while(T--)
	{
	    long long N; cin>>N;
	    long long record[N];
	    
	    FOR(i,0,N) cin>>record[i];
	    
	    long long sum = record[0]+record[1];
	    if(sum>record[N-1]) cout<<-1<<nl;
	    else cout<<1<<" "<<2<<" "<<N<<nl;
	}
}
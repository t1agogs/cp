#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	
	while(T--)
	{
	    int n,k; cin>>n>>k;
	    
	    if(n>k)
	    {
	        if(n%2==k%2) cout<<0<<nl;
	        else cout<<1<<nl;
	    }
	    else cout<<k-n<<nl;
	}
}
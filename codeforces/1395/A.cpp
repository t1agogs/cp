#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	
	while(T--)
	{
	    int r,g,b,w,cnt=0,cnt2=0; cin>>r>>g>>b>>w;
	    
	    cnt+=r&1;cnt+=g&1;cnt+=b&1;cnt+=w&1;
	    
	    int k=min(r,min(g,b));
	    k=min(k,1);
	    
	    cnt2+=(r-1)&1;cnt2+=(g-1)&1;cnt2+=(b-1)&1;cnt2+=(w-1)&1;
	    
	    if(cnt < 2) cout<<"Yes"<<nl;
	    else if(k==1&&cnt2<2) cout<<"Yes"<<nl;
	    else cout<<"No"<<nl;
	}
}
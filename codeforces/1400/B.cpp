#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()

using namespace std;

int main()
{
	int T; cin>>T;

	while(T--)
	{
		long long p,f,cs,cw,s,w; cin>>p>>f>>cs>>cw>>s>>w;

		if(s > w)
		{
			swap(s,w);
			swap(cs,cw);
		}

		int ans=0;
		for(int pKeep=0;pKeep<=cs;pKeep++)
		{
			if(pKeep*s > p) continue;
			int fKeep = min(cs-pKeep,f/s);
			int pLeft = p-pKeep*s;
			int fLeft = f-fKeep*s;
			int pWs = min(cw,pLeft/w);
			int fWs = min(cw-pWs,fLeft/w);
			ans = max(ans,pKeep+fKeep+pWs+fWs);
		}

		cout<<ans<<"\n";
	}
}
#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(int caseN)
{
    int N,maxE=1,diff=0; cin>>N;
    int cnt[N+1]={0};
    
    for(int i=0;i<N;i++)
    {
        int x;cin>>x;
        cnt[x]++;
        maxE=max(maxE,cnt[x]);
        if(cnt[x]==1) diff++;
    }
    
    int ans=max(min(maxE,diff-1),min(maxE-1,diff));
    
    cout<<ans<<nl;
    
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
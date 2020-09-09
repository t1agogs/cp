#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(int caseN)
{
    int N; cin>>N;
    int a[N];
    
    for(int i=0;i<N;i++) cin>>a[i];
    
    sort(a,a+N);
    
    int ans=1e9;
    for(int i=0;i<N-1;i++)
    {
        ans=min(ans,abs(a[i]-a[i+1]));
    }
    cout<<ans<<nl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
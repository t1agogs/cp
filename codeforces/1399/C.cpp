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
    vector<int> a(N);
    
    for(auto &x:a) cin>>x;
    
    int ans=0;
    for(int s=1;s<=2*N;s++)
    {
        int cnt[2*N+1]={0};
        int pairs=0;
        for(int i=0;i<N;i++)
        {
            if(s > a[i] && cnt[s-a[i]] > 0)
            {
                pairs++;
                cnt[s-a[i]]--;
            }
            else cnt[a[i]]++;
        }
        ans=max(ans,pairs);
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
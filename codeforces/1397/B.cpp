#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

const int64_t INF=1e17;

void solve()
{
    int N; cin>>N;
    vector<int> vec(N);
    
    for(auto &a:vec) cin>>a;
    
    sort(all(vec));
    
    int64_t ans=INF;
    for(int i=1;i<=1e9;i++)
    {
        int64_t temp=1;
        int64_t cost=0;
        for(int j=0;j<N;j++)
        {
            cost=cost+abs(vec[j]-temp) >= INF ? INF : cost+abs(vec[j]-temp);
            temp*=i;
            
            if(temp >= INF) temp=INF;
        }
        
        if(temp == INF) break;
        ans=min(ans,cost);
    }
    
    cout<<ans<<nl;
}

int main()
{
	//int T; cin>>T;
	//while(T--)
	    solve();
}
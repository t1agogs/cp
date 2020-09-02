#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve()
{
    int N; cin>>N;
    vector<int> vec(N);
    
    for(auto &a:vec) cin>>a;
    
    sort(all(vec));
    
    long long ans=accumulate(all(vec),0ll)-N;
    for(int c=1;c<=1e9;c++)
    {
        long long cost=0;
        long long temp=1;
        for(int i=0;i<N;i++)
        {
            cost+=abs(vec[i]-temp);
            temp*=c;
            
            if(temp >= 1e14) break;
        }
        
        if(temp >= 1e14) break;
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
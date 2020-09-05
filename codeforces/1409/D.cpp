#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

int retDigit(long long N, int digit)
{
    long long powN=pow(10,digit);
    if(digit>17) return N/powN;
    else return N/powN%10;
}

int sum(long long N)
{
    int ans=0;
    for(int i=0;i<19;i++)
    {
        ans+=retDigit(N,i);
    }
    return ans;
}

void solve(int caseN)
{
    long long N,S; cin>>N>>S;
    
    if(sum(N)<=S)
    {
        cout<<0<<nl;
        return;
    }
    
    long long ans=1e18;
    long long cost=0;
    for(int i=0;i<18;i++)
    {
        int digit=retDigit(N,i);
        if(digit==0) continue;
        long long diff=(10-digit)*pow(10,i);
        cost+=diff;
        N+=diff;
        
        if(sum(N)<= S)
        {
            ans=min(ans,cost);
            break;
        }
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
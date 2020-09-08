#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(int caseN)
{
    int N,minA=1e9,minB=1e9; cin>>N;
    int a[N],b[N];
    
    for(int i=0;i<N;i++)
    {
        int x; cin>>x;
        a[i]=x;
        minA=min(minA,x);
    }
    
    for(int i=0;i<N;i++)
    {
        int x; cin>>x;
        b[i]=x;
        minB=min(minB,x);
    }
    
    long long ans=0;
    for(int i=0;i<N;i++)
    {
        ans+=max(a[i]-minA,b[i]-minB);
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
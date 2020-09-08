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
    
    if(N == 1) cout<<0<<nl;
    else
    {
        long long sum=8;
        for(long long i=5;i<=N;i+=2)
        {
            sum+=((i-2)*(i-2)-1)+i*i-1;
        }
        cout<<sum<<nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(/*int caseN*/)
{
    int N,A; cin>>N>>A;
    vector<int> a(N);
    
    for(auto &x:a) cin>>x;
    
    int ans=0;
    for(int i=0;i<N;i++)
    {
        if(a[i]==1)
        {
            int dist = i-(A-1);
            int j = (A-1) - dist;
            if(j < 0 || j > N-1 || a[j]==a[i]) ans++;
        }
    }
    cout<<ans<<nl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T+1*/);
}
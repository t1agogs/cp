#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(/*int caseN*/)
{
    int N,K; cin>>N>>K;
    vector<int> a(N);
    
    for(auto &x: a) cin>>x;
    
    K=a[K-1];
    int ans=0;
    for(int i=0;i<N;i++)
    {
        if(a[i] >= K && a[i] > 0) ans++;
    }
    cout<<ans;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T+1*/);
}
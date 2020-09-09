#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(int caseN)
{
    int N,M; cin>>N>>M;
    vector<vector<char>> a(N,vector<char>(M));
    
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            cin>>a[i][j];
    
    int sum=0;
    for(int i=0;i<M;i++) sum+=a[N-1][i] == 'D' ?1:0;
    for(int i=0;i<N;i++) sum+=a[i][M-1] == 'R' ?1:0;
    
    cout<<sum<<nl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
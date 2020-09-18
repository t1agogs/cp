#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(/*int caseN*/)
{
    int N; cin>>N;
    vector<int> a(N);
    
    for(auto &x:a) cin>>x;
    
    vector<int> left(N),right(N);
    
    for(int i=1;i<N;i++)
    {
        if(a[i] >= a[i-1]) left[i]=left[i-1]+1;
    }
    for(int i=N-2;i>=0;i--)
    {
        if(a[i] >= a[i+1]) right[i]=right[i+1]+1;
    }
    
    int ans=0;
    for(int i=0;i<N;i++)
    {
        ans=max(ans,right[i]+left[i]);
    }
    cout<<ans+1;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T+1*/);
}
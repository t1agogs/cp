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
    string s; cin>>s;
    
    bool raze=false,breach=false;
    
    for(int i=0;i<N;i++)
    {
        if((i+1)&1)
            raze|=(s[i]-'0')&1;
        else
            breach|=(!(s[i]-'0'&1));
    }
    
    if(N&1)
        cout<<(raze?1:2)<<nl;
    else cout<<(breach?2:1)<<nl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
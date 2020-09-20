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
    
    if(N&1)
    {
        bool raze=false;
        for(int i=0;i<N;i+=2)
            if((int)s[i]&1)
                raze=true;
        
        if(raze) cout<<1<<nl;
        else cout<<2<<nl;
    }
    else
    {
        bool raze=true;
        for(int i=1;i<N;i+=2)
            if(!((int)s[i]&1))
                raze=false;
        
        if(raze) cout<<1<<nl;
        else cout<<2<<nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
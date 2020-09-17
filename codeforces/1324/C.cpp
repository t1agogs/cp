#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(int caseN)
{
    string s="R";
    string x; cin>>x;
    s+=x;
    s+="R";
    
    int ans=1;
    int lastR=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='R')
        {
            ans=max(ans,i-lastR);
            lastR=i;
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
#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

void solve(int caseN)
{
    long long N; cin>>N;
    
    if(N==1)
    {
        cout<<0<<nl;
        return;
    }
    
    if(N==2)
    {
        cout<<1<<nl;
        return;
    }
    
    if(N==3)
    {
        cout<<2<<nl;
        return;
    }
    
    if(N&1)
        cout<<3<<nl;
    else cout<<2<<nl;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T);
}
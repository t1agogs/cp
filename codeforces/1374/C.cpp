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
    
    int bal=0,cost=0;
    for(int i=0;i<N;i++)
    {
        if(s[i]=='(') bal++;
        else bal--;
        
        if(bal < 0)
        {
            bal=0;
            cost++;
        }
    }
    
    cout<<cost<<nl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
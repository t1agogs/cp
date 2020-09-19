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
    string s; cin>>s;
    
    bool found=false;
    for(int i=0;i<N;i++)
    {
        if(s[i]=='G')
        {
            int index=i;
            while(index-K >= 0 && (s[index-K]=='.' || s[index-K]=='T'))
            {
                index-=K;
                if(s[index]=='T') found=true;
            }
            index=i;
            while(index+K <= N-1 && (s[index+K]=='.' || s[index+K]=='T'))
            {
                index+=K;
                if(s[index]=='T') found=true;
            }
        }
    }
    if(found) cout<<"YES";
    else cout<<"NO";
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T+1*/);
}
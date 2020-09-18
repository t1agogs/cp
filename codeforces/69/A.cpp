#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(/*int caseN*/)
{
    int N,x=0,y=0,z=0; cin>>N;
    
    for(int i=0;i<N;i++)
    {
        int z1,x1,y1; cin>>x1>>y1>>z1;
        x+=x1; z+=z1; y+=y1;
    }
    
    if(x==0 && y==0 && z==0) cout<<"YES";
    else cout<<"NO";
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T+1*/);
}
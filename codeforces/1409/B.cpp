#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

long long compute(int a,int b,int x,int y,int n)
{
    int subA=min(n,a-x);
    a-=subA;
    n-=subA;
    b=max(b-n,y);
    return (long long)a*b;
}

void solve(int caseN)
{
    int A,B,X,Y,N; cin>>A>>B>>X>>Y>>N;
    long long ans=min(compute(A,B,X,Y,N),compute(B,A,Y,X,N));
    cout<<ans<<nl;
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(/*int caseN*/)
{
    int A,B,C,D; cin>>A>>B>>C>>D;
    
    int sum256 = min(A,min(C,D));
    A-=sum256;
    int sum32 = min(A,B);
    
    long long res =(32*sum32)+(256*sum256);
    cout<<res;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T+1*/);
}
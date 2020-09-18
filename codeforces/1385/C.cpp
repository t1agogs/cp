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
    vector<int> a(N);
    
    for(auto &x: a) cin>>x;
    
    int pos=N-1;
    
    while(pos > 0 && a[pos-1] >= a[pos]) pos--;
    while(pos > 0 && a[pos-1] <= a[pos]) pos--;
    
    cout<<pos<<nl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
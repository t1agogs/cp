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
    int a[N];
    
    for(int i=0;i<N;i++) cin>>a[i];
    
    int even=0,odd=0;
    for(int i=0;i<N;i++)
    {
        if(i%2 != a[i]%2)
            if(i%2==0) even++;
            else odd++;
    }
    
    if(even==odd) cout<<even<<nl;
    else cout<<-1<<nl;
    
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
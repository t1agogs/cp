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
    
    int even=0,odd=0;
    for(int i=0;i<N;i++)
    {
        int x; cin>>x;
        if(x%2 == 0) even++;
        else odd++;
        
        a[i]=x;
    }
    
    if(even%2==0)
    {
        cout<<"YES"<<nl; return;
    }else
    {
        sort(all(a));
        for(int i=0;i<N;i++)
        {
            if(abs(a[i]-a[i+1]) == 1)
            {
                even--;
                odd--;
                break;
            }
        }
    }
    
    if(even%2==0) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
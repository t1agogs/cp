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
    int arr[N];
    
    for(int i=0;i<N;i++) cin>>arr[i];
    
    long long total=0;
    for(int i=0;i<N;i++)
    {
        if(arr[i] > 0) total+=arr[i];
        else
        {
            long long transfer=min(total,(long long)-arr[i]);
            arr[i]+=transfer;
            total-=transfer;
        }
    }
    
    total=0;
    for(int i=0;i<N;i++)
    {
        if(arr[i] < 0) total+=abs(arr[i]);
    }
    cout<<total<<nl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
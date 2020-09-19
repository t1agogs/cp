#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(/*int caseN*/)
{
    int N; cin>>N;
    vector<int> a(N);
    
    for(auto &x:a) cin>>x;
    
    sort(all(a));
    
    int cut;
    if(N&1) 
    {
        cut=N/2;
        cout<<cut<<nl;
        for(int i=0;i<cut;i++)
        {
            cout<<a[cut+i]<<" ";
            cout<<a[i]<<" ";
        }
        cout<<a[N-1];
    }
    else
    {
        cut=N/2-1;
        cout<<cut<<nl;
        for(int i=0;i<cut;i++)
        {
            cout<<a[cut+i]<<" ";
            cout<<a[i]<<" ";
        }
        cout<<a[N-2]<<" "<<a[N-1];
    }
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T+1*/);
}
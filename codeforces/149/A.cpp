#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(/*int caseN*/)
{
    int K; cin>>K;
    vector<int> a(12);
    
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
    }
    sort(allr(a));
    
    int ans=0;
    for(int i=0;i<12;i++)
    {
        if(K > 0)
        {
            ans++; K-=a[i];
        }
    }
    if(K<=0) cout<<ans;
    else cout<<-1;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T+1*/);
}
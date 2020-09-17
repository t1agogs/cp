#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(/*int caseN*/)
{
    int N,M; cin>>N>>M;
    long long total=0;
    vector<pair<int,int>> a;
    
    for(int i=0;i<N;i++)
    {
        int b,c; cin>>b>>c; total+=b;
        pair<int,int> p={b,c};
        a.push_back(p);
    }
    
    sort(all(a),[](pair<int,int> a, pair<int,int> b)
    {
        return (a.first-a.second) > (b.first-b.second);
    });
    
    int ans=0,i=0;
    while(total > M)
    {
        if(i >= a.size())
        {
            cout<<-1<<nl;
            return;
        }
        total-=a[i].first-a[i].second;
        ans++;
        i++;
    }
    cout<<ans<<nl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T+1*/);
}
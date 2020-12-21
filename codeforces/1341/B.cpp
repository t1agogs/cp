#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

void solve(int caseN)
{
    int N,k; cin>>N>>k;
    vector<int> a(N);
    vector<int> ans(N);
    for(auto &x:a) cin>>x;
    
    for(int i=1;i<N-1;i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
            ans[i]=1;
    }
    
    int curr=0;
    int total=-1e9,l;
    for(int i=0;i<N;i++)
    {
        curr+=ans[i];
        if(i>=k-1)
        {
            if(ans[i-(k-1)]==1) curr--;
            if(ans[i]==1) curr--;
            if(curr > total)
                total=curr,l=i-(k-1);
            
            if(ans[i-(k-1)]==1) curr++;
            if(ans[i]==1) curr++;
            curr-=ans[i-(k-1)];
        }
    }
    cout<<total+1<<" "<<l+1<<nl;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	int T; cin>>T;
	while(T--)
	    solve(T);
}
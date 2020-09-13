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
    vector<int> res;
    
    for(auto &x: a) cin>>x;
    
    sort(all(a));
    
    if(N > 10)
    {
        for(int i=0;i<5;i++)
        {
            res.push_back(a[i]);
            res.push_back(a[N-i-1]);
        }
    }
    else
    {
        res=a;
    }
    
    long long ans=-1e18;
    for(int i=0;i<res.size();i++)
    {
        for(int j=i+1;j<res.size();j++)
        {
            for(int k=j+1;k<res.size();k++)
            {
                for(int l=k+1;l<res.size();l++)
                {
                    for(int m=l+1;m<res.size();m++)
                    {
                        ans=max(ans,(long long)res[i]*res[j]*res[k]*res[l]*res[m]);
                    }
                }
            }
        }
    }
    
    cout<<ans<<nl;
    
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
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
    vector<vector<int>> a(N,vector<int>(M));
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i=N-1;i>=0;i--)
    {
        for(int j=M-1;j>=0;j--)
        {
            if(a[i][j]==0)
            {
                if(a[i+1][j] == 0) a[i][j]=a[i][j+1]-1;
                else if(a[i][j+1] == 0) a[i][j]=a[i+1][j]-1;
                else a[i][j]=min(a[i+1][j]-1,a[i][j+1]-1);
            }
        }
    }
    
    int ans=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            ans+=a[i][j];
            int out1=i+1<N?a[i+1][j]:1e9,out2=j+1<M?a[i][j+1]:1e9;
            if(a[i][j] >= out1 || a[i][j] >= out2)
            {
                cout<<-1<<nl;
                return;
            }
        }
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
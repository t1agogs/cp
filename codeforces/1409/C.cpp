#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

vector<int> gen(int N, int start, int diff)
{
    vector<int> vec(N);
    vec[0]=start;
    for(int i=1;i<N;i++)
    {
        vec[i]=vec[i-1]+diff;
    }
    return vec;
}

void solve(int caseN)
{
    int N,X,Y; cin>>N>>X>>Y;
    
    vector<int> ans(N,Y*N);
    
    for(int i=1;i<=50;i++)
    {
        for(int diff=1;diff<=50;diff++)
        {
            vector<int> curr=gen(N,i,diff);
            
            bool workX=false,workY=false;
            for(int i=0;i<N;i++)
            {
                if(curr[i]==X) workX=true;
                if(curr[i]==Y) workY=true;
            }
            if(workX&workY)
            {
                if(*max_element(curr.begin(),curr.end()) < *max_element(ans.begin(),ans.end())) ans=curr;
            }
        }
    }
    
    for(int i=0;i<N;i++) cout<<ans[i]<<" ";
    cout<<nl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int T; cin>>T;
	while(T--)
	    solve(T+1);
}
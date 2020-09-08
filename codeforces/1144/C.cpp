#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(/*int caseN*/)
{
    int N,ni=0,nd=0; cin>>N;
    vector<int> rec(N);
    vector<int> temp(N,-1);
    vector<int> temp2(N,-1);
    vector<int> inc,dec;
    
    for(auto &x: rec) cin>>x;
    
    sort(all(rec));
    
    for(int i=0;i<N-1;i++)
    {
        if(rec[i]==rec[i+1])
        {
            temp[i]=rec[i];
            rec[i]=-1;
        }
    }
    
    for(int i=N-1;i>=0;i--)
    {
        if(rec[i] >= 0) temp2[i]=rec[i];
    }
    
    
    for(int i=0;i<N;i++)
    {
        if(temp[i] >= 0)
        {
            ni++;
            inc.push_back(temp[i]);
        }
        
        if(temp2[N-i-1] >= 0)
        {
            nd++;
            dec.push_back(temp2[N-i-1]);
        }
    }
    
    bool works=true;
    for(int i=0;i<inc.size();i++)
    {
        if(i+1 < inc.size() && inc[i] >= inc[i+1]) works=false;
    }
    
    if(!works)
    {
        cout<<"NO"<<nl;
        return;
    }
    
    for(int i=0;i<dec.size()-1;i++)
    {
        if(i+1 < dec.size() && dec[i] <= dec[i+1]) works=false;
    }
    
    if(!works)
    {
        cout<<"NO"<<nl;
        return;
    }
    else
    {
        cout<<"YES"<<nl;
        cout<<ni<<nl;
        for(int i=0;i<ni;i++)
        {
            cout<<inc[i]<<" ";
        }
        cout<<nl<<nd<<nl;
        for(int i=0;i<nd;i++)
        {
            cout<<dec[i]<<" ";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T+1*/);
}
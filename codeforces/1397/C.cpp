#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve()
{
    long long N; cin>>N;
    vector<long long> vec(N);
    
    for(auto &a:vec) cin>>a;
    
    if(N==1)
    {
        cout<<"1 1\n"<<-vec[0]<<"\n1 1\n0\n1 1\n0"<<nl;
        return;
    }
    else
    {
        cout<<"1 1\n"<<-vec[0]<<"\n";
        
        cout<<"1 "<<N<<"\n0 ";
        for(int i=1;i<N;i++) cout<<N*-vec[i]<<" ";
        
        cout<<"\n2 "<<N<<"\n";
        for(int i=1;i<N;i++) cout<<(N-1)*vec[i]<<" ";
    }
}

int main()
{
	//int T; cin>>T;
	//while(T--)
	    solve();
}
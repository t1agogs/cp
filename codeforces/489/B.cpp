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
		
		vector<int> boys(N);
		
		for(auto &x:boys) cin>>x;
		
		int M; cin>>M;
		vector<int> girls(M);
		vector<bool> check(M,1);
		
		for(auto &x:girls) cin>>x;
		
		sort(all(boys));
		sort(all(girls));
		
		int ans=0;
		for(int i=0;i<N;i++)
		{
		    for(int j=0;j<M;j++)
		    {
		        if(abs(boys[i]-girls[j])<=1 && check[j])
		        {
		            ans++;
		            check[j]=0;
		            break;
		        }
		    }
		}
		
		cout<<ans;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T+1*/);
}
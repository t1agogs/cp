#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<long long>> x(N,vector<long long>(M))

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

void solve(/*int caseN*/)
{
	int N; cin>>N;
	
	vector<int> a(N); for(auto &x:a) cin>>x;
	
	for(int mask=0;mask<(1<<N);mask++)
	{
		int curr=0;
		
		for(int i=0;i<N;i++)
			if(mask>>i & 1)
				curr+=a[i];
			else curr-=a[i];
			
		if(curr%360==0)
		{
			puts("YES");
			return;
		}
	}
	puts("NO");
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}
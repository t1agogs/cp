#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

#define vii(N,M) vector<vector<int>> a(N,vector<int>(M));

using namespace std;

int MOD=1e9+7;

int main()
{
	int T; cin>>T;
	while(T--)
	{
		int N,M; cin>>N>>M;
		
		vii(N,M);
		
		for(int i=0;i<N;i++)
			for(int j=0;j<M;j++)
				cin>>a[i][j];
				
		long long ans=0;
		for(int i=0;i<(N+1)/2;i++)
		{
			for(int j=0;j<(M+1)/2;j++)
			{
				vector<int> vals;
				vals.push_back(a[i][j]);
				
				if(N-i-1 != i) vals.push_back(a[N-i-1][j]);
				if(M-j-1 != j) vals.push_back(a[i][M-j-1]);
				if(N-i-1 != i && M-j-1 != j) vals.push_back(a[N-i-1][M-j-1]);
				
				sort(all(vals));
				
				for(int x: vals)
					ans+=abs(x-vals[vals.size()/2]);
			}
		}
		
		cout<<ans<<nl;
	}
}
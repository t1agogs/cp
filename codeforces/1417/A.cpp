#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T; cin>>T;
	while(T--)
	{
		int N,K; cin>>N>>K;
		vector<int> a(N);
		
		for(auto &x:a) cin>>x;
		
		sort(a.begin(),a.end());
		
		int ans=0;
		for(int i=1;i<N;i++)
				ans+=(K-a[i])/a[0];
				
		cout<<ans<<"\n";
	}
	
}
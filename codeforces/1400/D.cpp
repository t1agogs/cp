#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T; cin>>T;

	while(T--)
	{
		int N; cin>>N;
		vector<int> vec(N);
		int cntj[N+1]={0};

		for(auto &a: vec) cin>>a;

		long long ans=0;
		for(int j=0;j<N;j++)
		{
			int cntk[N+1]={0};
			for(int k=N-1;k>j;k--)
			{
				ans+=cntj[vec[k]]*cntk[vec[j]];
				cntk[vec[k]]++;
			}
			cntj[vec[j]]++;
		}
		
		cout<<ans<<"\n";
	}
}

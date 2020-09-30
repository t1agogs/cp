#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T; cin>>T;
	
	while(T--)
	{
		int N; cin>>N;
		vector<int> a(N);
		vector<vector<int>> ind(N);
		
		for(int i=0;i<N;i++)
		{
			cin>>a[i];
			a[i]--;
			ind[a[i]].push_back(i);
		}
		
		vector<int> ans(N+1,-1);
		int k=N;
		for(int x=0;x<N;x++)
		{
			int dist=-1;
			int last=-1;
			ind[x].push_back(N);
			for(int pos:ind[x])
			{
				dist=max(dist,pos-last);
				last=pos;
			}
			
			while(dist <= k)
			{
				ans[k]=x+1;
				k--;
			}
		}
		
		for(int i=1;i<=N;i++)
			cout<<ans[i]<<" ";
			
		cout<<"\n";
	}
}
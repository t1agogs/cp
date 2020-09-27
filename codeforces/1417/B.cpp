#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T; cin>>T;
	while(T--)
	{
		int N,f; cin>>N>>f;
		map<int,int> m,m2;
		vector<int> a(N),cnt2;
		
		for(int i=0;i<N;i++)
		{
			int x; cin>>x;
			if(m[f-x] == 0)
			{
				cnt2.push_back(0);
				m[x]++;
			}
			else 
			{
				if(m[f-x] < m2[f-x])
				{
					cnt2.push_back(0);
					m[x]++;
				}
				else 
				{
					cnt2.push_back(1);
					m2[x]++;
				}
			}
		}
		
		for(int i=0;i<(int)cnt2.size();i++)
			cout<<cnt2[i]<<" ";
				
		cout<<"\n";
	}
	
}
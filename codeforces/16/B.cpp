#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
	int N,M; cin>>N>>M;
	vector<pair<int,int>> a(M);
	
	for(int i=0;i<M;i++)
	{
		int x,y; cin>>x>>y;		
		pair<int,int> p={x,y};
		a.push_back(p);
	}
	
	sort(all(a),[&](pair<int,int> l, pair<int,int> r){return l.second > r.second;});
	
	long long ans=0;
	for(int i=0;i<M;i++)
	{
		while(a[i].first > 0 && N > 0)
		{
			a[i].first-=1;
			N--;
			ans+=a[i].second;
		}
	}
	cout<<ans;
}

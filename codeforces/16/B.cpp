#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
	int N,M; cin>>N>>M;
	vector<pair<int,int>> a(M);
	
	for(int i=0;i<M;i++) {int x,y; cin>>x>>y; a.push_back(make_pair(x,y));}
	
	sort(all(a),[&](pair<int,int> l,pair<int,int> r){return l.second > r.second;});
	
	int ans=0;
	for(int i=0;i<M&&N>0;i++)
	{
		int cur = min(a[i].first,N);
		ans+=cur*a[i].second;
		N-=cur;
	}
	cout<<ans;
}

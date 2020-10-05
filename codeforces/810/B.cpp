#include <bits/stdc++.h>

using namespace std;

#define nl "\n"

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int N,f; cin>>N>>f;
	
	vector<pair<long long,long long>> a(N);
	
	for(int i=0;i<N;i++)
	{
		int b,c; cin>>b>>c;
		a[i]=make_pair(b,c);
	}
	
	sort(a.begin(),a.end(),[](pair<long long,long long> a,pair<long long,long long> b){ return min((long long)(a.first*2),a.second)-min(a.first,a.second) > min((long long)(b.first*2),b.second)-min(b.first,b.second); });

	for(int i=0;i<f;i++)
		a[i].first*=2;
		
	long long sum=0;
	for(int i=0;i<N;i++)
		sum+=(long long)min(a[i].first,a[i].second);
		
	cout<<sum;
}
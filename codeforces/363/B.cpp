#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int MOD=1e9+7;

int main()
{
	int N,K; cin>>N>>K;
	vector<int> a(N);
	
	for(auto &x:a) cin>>x;
	
	vector<long long> pre_sum(N+1);
	
	for(int i=1;i<=N;i++)
		pre_sum[i]=pre_sum[i-1]+a[i-1];
		
	long long minN=1e18;
	int ind=0;
	for(int i=1;i<=N;i++)
	{
		if(minN > (i-K<0?1e18:pre_sum[i]-pre_sum[i-K]))
		{
			minN=pre_sum[i]-pre_sum[i-K];
			ind=i;
		}
	}
	
	cout<<ind-K+1;
}
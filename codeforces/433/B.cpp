#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int MOD=1e9+7;

int main()
{
	int N; cin>>N;
	vector<long long> a(N),preA(N+1),preB(N+1);
	
	for(auto &x:a) cin>>x;
	
	preA[0]=0; preB[0]=0;
	
	for(int i=1;i<=N;i++)
		preA[i]=preA[i-1]+a[i-1];
		
	sort(a.begin(),a.end());
	
	for(int i=1;i<=N;i++)
		preB[i]=preB[i-1]+a[i-1];

	int M; cin>>M;
	
	for(int i=0;i<M;i++)
	{
		int type,l,r; cin>>type>>l>>r;
		
		if(type==1) cout<<preA[r]-preA[l-1]<<nl;
		else cout<<preB[r]-preB[l-1]<<nl;
	}
}
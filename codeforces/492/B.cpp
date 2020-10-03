#include <bits/stdc++.h>

using namespace std;

#define nl "\n"

int main()
{
	int N,d; cin>>N>>d;
	vector<int> a(N);
	
	for(int i=0;i<N;i++) cin>>a[i];
	
	sort(a.begin(),a.end());
	
	a.push_back(d+(d-a[N-1])); a.push_back(0-a[0]);
	
	sort(a.begin(),a.end());
	
	int ans=1;
	for(int i=0;i<N+1;i++)
	{
		ans=max(ans,a[i+1]-a[i]);
	}
	double res = (double) ans/2;
	cout<<fixed<<setprecision(10)<<res;
}
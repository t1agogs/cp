#include <bits/stdc++.h>

using namespace std;

#define nl "\n"

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int N; cin>>N;
	
	vector<long long> a(N);
	
	for(auto &x:a) cin>>x;
	
	sort(a.begin(),a.end());
	
	for(int i=0;i<N-2;i++)
	{
		if((long long)(a[i]+a[i+1])>a[i+2])
		{
			cout<<"YES";
			return 0;
		}
	}
	
	cout<<"NO";
}
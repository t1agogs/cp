#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
	int N,M; cin>>N;
	vector<int> a(N+1);
	
	for(int i=1;i<=N;i++)
	{
		int x; cin>>x;
		a[x]=i;
	}
	
	cin>>M;
	
	long long A=0,B=0;
	for(int i=0;i<M;i++)
	{
		int q; cin>>q;
		
		A+=a[q];
		B+=(N-a[q])+1;
	}
	cout<<A<<" "<<B<<nl;
}
#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
	int N; cin>>N;
	
	int ans=0;
	for(int i=0;i<N;i++)
	{
		int x; cin>>x;
		ans=max(ans,x);
	}
	cout<<ans;
}
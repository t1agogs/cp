#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int MOD=1e9+7;

int main()
{
	int T; cin>>T;
	while(T--)
	{
		long long a,b,c; cin>>a>>b>>c;
		if(b > a) swap(a,b);
		if(b > c) swap(b,c);
		cout<<(long long)(a+b+c)-1<<nl;
	}
}
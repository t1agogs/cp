#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()

using namespace std;

using namespace std;

int main()
{
	int T; cin>>T;

	while(T--)
	{
		int n; cin>>n;
		string s; cin>>s;

		for(int i=0;i<2*n-1;i+=2)
			cout<<s[i];
		cout<<"\n";
	}
}
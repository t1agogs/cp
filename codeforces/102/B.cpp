#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
	string s; cin>>s;
	
	int ans=0;
	while(s.length()>1)
	{
		int n=0;
		for(int i=0;i<(int)s.length();i++)
			n+=s[i]-'0';
		s=to_string(n);
		ans++;
	}
	cout<<ans;
}
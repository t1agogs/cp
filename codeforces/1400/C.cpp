#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T; cin>>T;
	
	while(T--)
	{
		string s,mine; cin>>s;
		int x; cin>>x;
		mine=s;
		for(int i=0;i<s.length();i++) mine[i]='1';

		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			{
				if(i+x < s.length())
					mine[i+x]='0';

				if(i-x >= 0)
					mine[i-x]='0';
			}
		}

		bool works=true;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				if(i-x >= 0 && mine[i-x]=='1') continue;
				if(i+x < s.length() && mine[i+x]=='1') continue;
				works=false;
			}
		}

		if(works) cout<<mine<<"\n";
		else cout<<-1<<"\n";
	}
}

#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
	int a[3]={0};
	
	for(int i=0;i<3;i++)
	{
		string s; cin>>s;
		
		if(s[1]=='<')
			swap(s[2],s[0]);
			
		a[s[0]-'A']++;
	}
	
	if(a[0]==a[1]||a[1]==a[2]||a[2]==a[0]) cout<<"Impossible";
	else
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				if(a[j]==i)
					cout<<(char)('A'+j);
}
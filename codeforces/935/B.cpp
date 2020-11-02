#include <bits/stdc++.h>

#define nl "\n"
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

void solve(/*int caseN*/)
{
	//freopen("gymnastics.in","r",stdin);
	//freopen("gymnastics.out","w",stdout);
	
	int N; cin>>N;
	string s; cin>>s;
	
	pair<int,int> fafa={0,0};
	
	bool first=false;
	bool second=false;
	int ans=0;
	for(int i=0;i<N;i++)
	{
		if(s[i]=='U')
		{
			fafa.first++;
			if(i==0)
			{
				first=true;
				continue;
			}
		}
		else
		{
			fafa.second++;
			if(i==0)
			{
				second=true;
				continue;
			}
		}
			
		if((first > second && fafa.first < fafa.second) || (first < second && fafa.first > fafa.second))
		{
			ans++;
			first^=1;
			second^=1;
		}
	}
	cout<<ans;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}
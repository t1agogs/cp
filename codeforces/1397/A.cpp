#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

int main()
{
	int T; cin>>T;

	while(T--)
	{
		int N; cin>>N;
		int cnt[30]={0};
		
		for(int i=0;i<N;i++)
		{
		    string s; cin>>s;
		    
		    for(int j=0;j<s.length();j++)
		    {
		        cnt[toupper(s[j])-64]++;
		    }
		}
		
		bool works=true;
		for(int i=0;i<30;i++)
		{
		    if(cnt[i] > 0 && cnt[i]%N!=0) works=false;
		}
		    
		if(works) cout<<"YES"<<nl;
		else cout<<"NO"<<nl;
	}
}
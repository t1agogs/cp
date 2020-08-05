#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n,ans=0,len=0; cin>>n;
	
	while(n)
	{
	    if(n%10==7)
	        ans+=(1<<len);
	    n/=10;
	    len++;
	}
	
	for(int i=1;i<len;i++)
	{
	    ans+=(1<<i);
	}
	cout<<ans+1;
}
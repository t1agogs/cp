#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	
	while(T--)
	{
	    int n,m,total=0; cin>>n>>m;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            char s; cin>>s;
	            if(i+1==n && s!='R') total++;
	            else if(j+1==m && s!='D') total++;
	        }
	    }
	    
	    cout<<total-1<<nl;
	}
}
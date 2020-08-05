#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t,n; cin>>t;
	
	while(t--)
	{
	    cin>>n;
	    vector<int> vec1(n);
	    vector<int> vec2(n);
	    int minA=1e9,minB=1e9;
	    unsigned long long ans=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        vec1[i]=a;
	        
	        minA=min(minA,a);
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        int b;
	        cin>>b;
	        vec2[i]=b;
	        
	        minB=min(minB,b);
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        ans+=max(vec1[i]-minA,vec2[i]-minB);
	    }
	    
	    cout<<ans<<"\n";
	    
	}
}
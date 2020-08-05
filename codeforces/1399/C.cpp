#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t,n; cin>>t;
	
	while(t--)
	{
	    cin>>n;
	    vector<int> vec;
	    int ans=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        vec.push_back(a);
	    }
	    
	    for(int s=2;s<=2*n;s++)
	    {
	        int counts[n*2+1]={0},pairs=0;
	        for(int act=0;act<(int)vec.size();act++)
	        {
	            if(s > vec[act] && counts[s-vec[act]] != 0)
	            {
	                counts[s-vec[act]]--;
	                pairs++;
	            }
	            else counts[vec[act]]++;
	        }
	        ans=max(ans,pairs);
	    }
	    
	    cout<<ans<<"\n";
	    
	}
}
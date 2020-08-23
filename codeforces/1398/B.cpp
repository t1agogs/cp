#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	
	while(T--)
	{
	    string s; cin>>s;
	    int N=s.length(),ans=0;
	    vector<int> vec;
	    
	    FOR(i,0,N)
	    {
	        if(s[i]=='1')
	        {
	            int j=i;
	            while(j+1 < N && s[j+1]=='1') j++;
	            vec.push_back(j-i+1);
	            i=j;
	        }
	    }
	    
	    sort(allr(vec));
	    
	    FOR(i,0,sz(vec))
	    {
	        if(i%2==0)
	            ans+=vec[i];
	    }
	    
	    cout<<ans<<nl;
	}
}
#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(),v.end()

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	
	while(T--)
	{
	    int n,small=1e9; cin>>n;
	    vector<int> record,clone;
	    
	    for(int i=0;i<n;i++)
	    {
	        int num; cin>>num;
	        clone.push_back(num); record.push_back(num);
	    }
	    
	    sort(all(clone));
	    small=clone[0];
	    for(int i=0;i<n;i++)
	    {
	        if(record[i]!=clone[i])
	        {
	            if(record[i]%small!=0)
	            {
	                cout<<"NO"<<nl;
	                goto outer;
	            }
	        }
	    }
	    cout<<"YES"<<nl;
	    outer:;
	}
}
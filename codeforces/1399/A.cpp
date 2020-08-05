#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t,n; cin>>t;
	
	while(t--)
	{
	    int maxN=0;
	    cin>>n;
	    int record[n];
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        record[i]=a;
	    }
	    
	    sort(record,record+n);
	    bool check=true;
	    for(int i=0;i<n-1;i++)
	    {
	        if(abs(record[i]-record[i+1]) > 1) check=false;
	    }
	    
	    if(check) cout<<"YES"<<"\n";
	    else cout<<"NO"<<"\n";
	}
}
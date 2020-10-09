#include <bits/stdc++.h>

using namespace std;

#define nl "\n"

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int N,M,k,t; cin>>N>>M>>k>>t;
	
	vector<int> waste;
	
	for(int i=0;i<k;i++)
	{
		int a,b; cin>>a>>b;
		waste.push_back(((a*M)-(M-b)));
	}
	
	
	for(int i=0;i<t;i++)
	{
		int a,b; cin>>a>>b;
		
		int pos=(a*M)-(M-b);
		int wasteN=0;
		
		for(int j=0;j<(int)waste.size();j++)
		{
			if(waste[j]==pos)
			{
				cout<<"Waste\n";
				goto done;
			}
			
			if(waste[j]< pos) wasteN++;
		}
		
		if((pos-wasteN)%3==1) cout<<"Carrots\n";
		if((pos-wasteN)%3==2) cout<<"Kiwis\n";
		if((pos-wasteN)%3==0) cout<<"Grapes\n";
		
		done:;
	}
}
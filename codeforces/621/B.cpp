#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n; cin>>n;
	int gridX[2001]={0};
	int gridY[2001]={0};
	
	for(int i=0;i<n;i++)
	{
	    int x,y;cin>>x>>y;
	    int pos1=x-y+1000;
	    int pos2=x+y;
	    gridX[pos1]++;
	    gridY[pos2]++;
	}
	
	long long sum=0;
	
	for(int i=0;i<2001;i++)
	{
	    if(gridX[i]>1) sum+=gridX[i]*(gridX[i]-1)/2;
	    if(gridY[i]>1) sum+=gridY[i]*(gridY[i]-1)/2;
	}
	
	cout<<sum;
}
#include <bits/stdc++.h>

using namespace std;

int perm(int n,int r);

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	long long n,maxE=0,minE=1e9,nMax=0,nMin=0; cin>>n;
	vector<int> record;
	
	for(int i=0;i<n;i++)
	{
	    long long num; cin>>num;
	    record.push_back(num);
	    maxE=max(maxE,num);
	    minE=min(minE,num);
	}
	cout<<maxE-minE<<" ";
    
    for(int i=0;i<n;i++)
    {
        if(record[i]==maxE) nMax++;
        else if(record[i]==minE) nMin++;
    }
    
    if(maxE==minE)
        cout<<n*(n-1)/2;
    else cout<<nMin*nMax;
}
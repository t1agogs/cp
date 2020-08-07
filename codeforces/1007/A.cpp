/*
*   Author: T1ago.gs
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n,maxN=0; cin>>n;
	map<int,int> record;
	
    for(int i=0;i<n;i++)
    {
        int num; cin>>num;
        record[num]++;
        maxN=max(maxN,record[num]);
    }
    
    cout<<n-maxN;
}
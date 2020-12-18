#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<long long>> x(N,vector<long long>(M))

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

void solve(/*int caseN*/)
{
	int N,k; cin>>N>>k;
	vector<int> a(N);
	
	for(auto &x:a) cin>>x;
	
	int total=0,curr=0;
	int index=-1;
	for(int i=0;i<N;i++)
	{
		curr+=a[i];
		if(i>k-1)
		{
			curr-=a[i-k];
			if(curr < total)
				total=curr,index=i;
		}
		else if(i==k-1)
		{
			index=i;
			total=curr;
		}
	}
	
	cout<<(index-(k-1))+1;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}
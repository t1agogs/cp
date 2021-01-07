#include <bits/stdc++.h>

#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")

#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()
 
using namespace std;
 
void solve(/*int caseN*/)
{
	int N,k; cin>>N>>k;
	
	vector<int> a(32);
	int cnt=0;
	for(int i=0;i<=30;i++)
	{
		if(N&(1<<i))
			cnt++,a[i]+=1;
			
	}
	
	if(cnt>k || k>N)
	{
		cout<<"NO"<<nl;
		return;
	}
	
	for(int i=31;i>=0;i--)
	{
		while(cnt+1<=k && a[i]>0)
		{
			a[i-1]+=2;
			a[i]--;
			cnt++;
		}
	}
	
	if(cnt<k)
	{
		cout<<"NO"<<nl;
		return;
	}
	
	cout<<"YES"<<nl;
	for(int i=0;i<32;i++)
	{
		for(int j=0;j<a[i];j++)
			cout<<(1<<i)<<" ";
	}
}
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    //int T; cin>>T;
    //while(T--)
        solve(/*T*/);
}
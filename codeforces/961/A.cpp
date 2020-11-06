#include <bits/stdc++.h>
 
#define nl "\n"
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;
 
void solve(/*int caseN*/)
{
	//freopen("gymnastics.in","r",stdin);
	//freopen("gymnastics.out","w",stdout);
	
	int N,M; cin>>N>>M;
	
	vector<int> a(N);
	for(int i=0;i<M;i++)
	{
		int x; cin>>x;
		a[x-1]++;
	}
	
	int ans=*min_element(all(a));
	cout<<ans;
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}

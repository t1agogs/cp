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
	
	int N; cin>>N;
	
	vector<int> a(N);
	
	for(auto &x:a) cin>>x;
	
	for(int i=0;i<N;i++)
	{
		if(i+1==a[a[a[i]-1]-1])
		{
			puts("YES");
			return;
		}
	}
	puts("NO");
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}
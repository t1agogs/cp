#include <bits/stdc++.h>
 
#define nl "\n"
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

int a[3],x,y;

int getthird(int t1)
{
	if(t1 > a[0] && t1<=a[1]) return 1;
	else if(t1 > a[1] && t1 <=a[2]) return 2;
	else return 3;
}
 
void solve(/*int caseN*/)
{
	//freopen("gymnastics.in","r",stdin);
	//freopen("gymnastics.out","w",stdout);
	
	int t1,t2;
	cin>>a[0]>>a[1]>>a[2]>>t1>>t2;
	
	a[1]/=5;
	a[2]/=5;
	
	sort(a,a+3);
	
	if(getthird(t1)==getthird(t2))
		puts("YES");
	else puts("NO");
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}

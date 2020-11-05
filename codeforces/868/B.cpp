#include <bits/stdc++.h>
 
#define nl "\n"
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

double h,m,s,t1,t2;

bool works(double a, double b, double c)
{
	if(b<a) b+=12.0;
	if(c<a) c+=12.0;
	return c>b;
}
 
void solve(/*int caseN*/)
{
	//freopen("gymnastics.in","r",stdin);
	//freopen("gymnastics.out","w",stdout);
	
	cin>>h>>m>>s>>t1>>t2;
	h=h+(m/60)+(s/3600);
	m=(m/5)+(s/3600);
	s=s/5;
	
	while(h>12.0)
		h-=12.0;
		
	while(m>12.0)
		m-=12.0;
		
	while(s>12.0)
		s-=12.0;
	
	if(works(t1,t2,h)&&works(t1,t2,m)&&works(t1,t2,s)) puts("YES");
	else
	{
		swap(t1,t2);
		if(works(t1,t2,h)&&works(t1,t2,m)&&works(t1,t2,s)) puts("YES");
		else puts("NO");
	}
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}
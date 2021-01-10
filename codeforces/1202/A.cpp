#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()
 
using namespace std;

void solve(int caseN)
{
    string x,y; cin>>x>>y;
    int N=y.length();
    int N2=x.length();
    
    int pos1=0,pos2=0;
    for(int i=N-1;i>=0;i--)
        if(y[i]=='1')
        {
            pos1=N-i;
            break;
        }
        
    for(int i=N2-1;i>=0;i--)
    {
        if(x[i]=='1' && N2-i>=pos1)
        {
            pos2=N2-i;
            break;
        }
    }
    
    cout<<pos2-pos1<<nl;
}
 
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	while(T--)
		solve(T);
}
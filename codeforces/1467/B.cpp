#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()
 
using namespace std;

int check(int x,vector<int> &a)
{
    if(x==0 || x==a.size()-1)
        return 0;
        
    if((a[x]>a[x-1]&&a[x]>a[x+1])||(a[x]<a[x-1]&&a[x]<a[x+1]))
        return 1;
    else return 0;
}

void solve(int caseN)
{
    int N; cin>>N;
    vector<int> a(N); for(auto &x:a) cin>>x;
    
    int total=0,sub=0;
    for(int i=0;i<N;i++)
    {
        if(check(i,a))
        {
            total++;
            int temp=a[i];
            int totalSub=check(i-1,a)+check(i+1,a)+1;
            
            a[i]=a[i+1];
            sub=max(sub,totalSub-check(i-1,a));
            
            a[i]=a[i-1];
            sub=max(sub,totalSub-check(i+1,a));
            
            a[i]=temp;
        }
    }
    cout<<total-sub<<nl;
}
 
int main()
{
	ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	while(T--)
		solve(T);
}
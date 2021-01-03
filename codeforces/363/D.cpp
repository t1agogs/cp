#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()
 
using namespace std;

int check(int mid,int k,vector<int> &a,vector<int> &b)
{	
	int N=b.size();
	int ans=0,val=0;
	int j=0;
	for(int i=mid-1;i>=0;i--)
	{
		if(a[i]>=b[j])
			ans++,val+=b[j],j++;
		else if(a[i]+k >= b[j])
		{
			k-=b[j]-a[i];
			ans++;
			j++;
			val+=a[i];
		}
		
		if(j==N)
			break;
	}
	
	if(ans>=mid)
	{
		return max(val-k,0);
	}
	else return -1;
}

void solve(/*int caseN*/)
{
	int N,M,k; cin>>N>>M>>k;
	vector<int> a(N); for(auto &x:a) cin>>x;
	vector<int> b(M); for(auto &x:b) cin>>x;
	
	sort(allr(a));
	sort(all(b));
	
	int l=1,r=min(M,N),ans=0,minN=0;
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		
		int val = check(mid,k,a,b);
		
		if(val!=-1)
			ans=mid,minN=val,l=mid+1;
		else r=mid-1;
	}
	cout<<ans<<" "<<minN;
}
 
int main()
{
    ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
    
    //int T; cin>>T;
    //while(T--)
        solve(/*T*/);
}
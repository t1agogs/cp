#include <bits/stdc++.h>
 
#define nl "\n"
#define ll long long
#define vii(N,M,x) vector<vector<int>> x(N,vector<int>(M))

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

bool sq[2001]={false};

void solve(/*int caseN*/)
{
	int N,M; cin>>N>>M;
	
	vii(N,M,a);
	vector<bool> rows(N),columns(M);
	
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			cin>>a[i][j];
			
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(a[i][j]==0)
			{
				rows[i]=true;
				columns[j]=true;
			}
		}
	}
	
	vii(N,M,ans);
	
	for(int i=0;i<N;i++)
	{
		if(rows[i])
			continue;
		for(int j=0;j<M;j++)
		{
			if(columns[j])
				continue;
				
			ans[i][j]=1;
		}
	}
	
	vii(N,M,check);
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(ans[i][j]==1)
			{
				check[i][j]=1;
				for(int k=0;k<N;k++)
					check[k][j]=1;
				
				for(int l=0;l<M;l++)
					check[i][l]=1;
			}
		}
	}
	
	bool works=true;
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(a[i][j]!=check[i][j])
				works=false;
		}
	}
	
	if(!works)
		cout<<"NO";
	else
	{
		cout<<"YES"<<nl;
		
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<M;j++)
			{
				cout<<ans[i][j]<<" ";
			}
			cout<<nl;
		}
	}
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}
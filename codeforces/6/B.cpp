#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int MOD=1e9+7;

int main()
{
	int N,M; cin>>N>>M;
	char c; cin>>c;
	
	vector<vector<char>> a(N,vector<char>(M));
	
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			cin>>a[i][j];
			
	set<char> s;
	
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			if(a[i][j]==c)
			{
				if(j+1 < M && a[i][j+1]!='.' && a[i][j+1]!=c) s.insert(a[i][j+1]);
				if(j-1 >= 0 && a[i][j-1]!='.' && a[i][j-1]!=c) s.insert(a[i][j-1]);
				if(i+1 < N && a[i+1][j]!='.' && a[i+1][j]!=c) s.insert(a[i+1][j]);
				if(i-1 >= 0 && a[i-1][j]!='.' && a[i-1][j]!=c) s.insert(a[i-1][j]);
			}
			
	cout<<s.size();
}
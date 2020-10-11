#include <bits/stdc++.h>

using namespace std;

#define nl "\n"

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int N,M,x; cin>>N>>M>>x;
	
	vector<vector<char>> a(N, vector<char>(M));
	
	int letters[26*2]={0};
	
	for(int i=0;i<N;i++)
	{
		string s; cin>>s;
		for(int j=0;j<M;j++)
			a[i][j]=s[j];
	}
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(a[i][j]=='S') continue;
			letters[(a[i][j]%32)-1]=1;
			
			for(int k=0;k<N;k++)
			{
				for(int l=0;l<M;l++)
				{
					if(a[k][l]=='S')
					{
						double pos=sqrt(pow((k-i),2)+pow((l-j),2));
						if(pos <= x) letters[(a[i][j]%32)+25]=1;
						else 
						{
							if(letters[(a[i][j]%32)+25]==1) continue;
							letters[(a[i][j]%32)+25]=2;
						}
					}
				}
			}
		}
	}
	
	int q; cin>>q;
	string s; cin>>s;
	int count1=0;
	int count2=0;
	for(int i=0;i<q;i++)
	{
		if(toupper(s[i])==s[i])
		{
			if(letters[(s[i]%32)+25]==1) count1++;
			else if(letters[(s[i]%32)+25]==2)
			{
				count1++; count2++;
			}
		}
		else
		{
			if(letters[(s[i]%32)-1]==1) count1++;
		}
	}

	if(count1!=q) cout<<-1;
	else cout<<count2;
}
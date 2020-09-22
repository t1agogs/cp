#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
	int N; cin>>N;
	string s; cin>>s;
	vector<char> res(N);
	
	int mid=(N-1)/2;
	
	int cur=mid;
	if(N&1)
	{
		for(int i=0;i<N;i+=2)
		{
			res[cur]=s[i];
			cur++;
		}
		
		cur=mid-1;
		for(int i=1;i<N;i+=2)
		{
			res[cur]=s[i];
			cur--;
		}
	}
	else
	{
		for(int i=0;i<N;i+=2)
		{
			res[cur]=s[i];
			cur--;
		}
		cur=mid+1;
		
		for(int i=1;i<N;i+=2)
		{
			res[cur]=s[i];
			cur++;
		}
	}
	
	for(int i=0;i<N;i++)
		cout<<res[i];
}
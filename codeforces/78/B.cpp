#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
	int N; cin>>N;
	vector<char> res(N);
	res[0]='R'; res[1]='O'; res[2]='Y'; res[3]='G'; res[4]='B'; res[5]='I'; res[6]='V';
	
	for(int i=7;i<N;i++)
	{
		res[i]=res[i-4];
	}
	
	for(int i=0;i<N;i++)
	{
		cout<<res[i];
	}
}
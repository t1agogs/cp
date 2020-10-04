#include <bits/stdc++.h>

#define nl "\n"
#define all(v) v.begin(), v.end()

using namespace std;

int MOD=1e9+7;

int main()
{
	int N; cin>>N;
	vector<int> a(N);
	
	for(auto &x:a) cin>>x;
	
	int ind=-1;
	for(int i=0;i<N-1;i++)
		if(a[i] > a[i+1])
		{
			ind=i;
			break;
		}
	if(ind < 0) cout<<"yes"<<nl<<1<<" "<<1;
	else
	{
		int start=ind;
		while(ind < N-1 && a[ind] > a[ind+1])
			ind++;
			
		int pos=start;
		for(int i=ind;i>start;i--)
		{
			swap(a[pos],a[i]);
			pos++;
			
			if(pos >= i) break;
		}
			
		bool works=true;
		for(int i=0;i<N-1;i++) if(a[i] > a[i+1]) works=false;
		
		if(works) cout<<"yes"<<nl<<start+1<<" "<<ind+1;
		else cout<<"no";
	}
}
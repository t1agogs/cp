#include <bits/stdc++.h>

using namespace std;

#define nl "\n"

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int N; cin>>N;
	
	vector<int> birth(N),death(N);
	
	for(int i=0;i<N;i++)
	{
		cin>>birth[i]>>death[i];
	}
	
	sort(birth.begin(),birth.end()); sort(death.begin(),death.end());
	
	long long ans=1,time=birth[0];
	long long sum=1;
	long long j=0,i=1;
	while(i<N&&j<N)
	{
		if(birth[i] < death[j])
		{
			sum++;
			if(ans < sum)
			{
				ans=sum;
				time=birth[i];
			}
			i++;
		}
		else 
		{
			sum--;
			j++;
		}
	}
	cout<<time<<" "<<ans;
}
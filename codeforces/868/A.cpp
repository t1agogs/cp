#include <bits/stdc++.h>

#define nl "\n"
 
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
 
#define FOR(i,k,n) for(int i=k;i<n;i++)
 
#define sz(vec) (int)vec.size()>
 
using namespace std;

void solve(/*int caseN*/)
{
	//freopen("gymnastics.in","r",stdin);
	//freopen("gymnastics.out","w",stdout);
	
	string s; cin>>s;
	int N; cin>>N;
	set<string> opt;
	vector<string> a(N);
	
	for(auto &x:a) cin>>x;
	
	for(int i=0;i<N;i++)
	{
		string first=a[i];
		string third1;
		third1+=first[1];
		third1+=first[0];
		opt.insert(third1);
		opt.insert(first);
		for(int j=i+1;j<N;j++)
		{
			string second=a[j];
			string first2;
			first2+=first[1];
			first2+=second[0];
			string second2;
			second2+=second[1];
			second2+=first[0];
			string third2;
			third2+=second[1];
			third2+=second[0];
			opt.insert(first2);
			opt.insert(second2);
			opt.insert(second);
		}
	}
	
	cout<<nl;
	if(opt.count(s) == 1)
		cout<<"YES";
	else
		cout<<"NO";
}
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T*/);
}
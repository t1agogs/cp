#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n,q; cin>>n;
	int rec[100001]={};
	multiset<int> s;
	
	for(int i=0;i<n;i++)
	{
	    int num; cin>>num;
	    rec[num]++;
	}
	
	for(int i=1;i<=100000;i++)
	{
	   s.insert(rec[i]);
	}
	
	cin>>q;
	for(int i=0;i<q;i++)
	{
	    int num;
	    char op; cin>>op>>num;
	    
	    s.erase(s.find(rec[num])); 
	    if(op=='+')
	        ++rec[num];
	    else --rec[num];
	    
	    s.insert(rec[num]);
	    
	    auto it=s.rbegin();
	    int n1=*it;
	    it++;
	    int n2=*it;
	    it++;
	    int n3=*it;
	    
	    if(n1 >= 8 || (n1>=6 && n2>=2) || (n1>=4 && n2>=4) || (n1>=4 && n2>=2 && n3>=2))
	       cout<<"YES"<<nl;
	    else cout<<"NO"<<nl;
	    
	}
}
#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n,n2=0,n4=0,n6=0,n8=0; cin>>n;
	int array[n],freq[100001]={0};
	
	for(int i=1;i<=n;i++)
	{
	    int num; cin>>num;
	    array[i]=num;
	    freq[array[i]]++;
	    
	    if(freq[array[i]]==2) n2++;
	    if(freq[array[i]]==4) n4++;
	    if(freq[array[i]]==6) n6++;
	    if(freq[array[i]]==8) n8++;
	}
	
	int q; cin>>q;
	
	for(int i=1;i<=q;i++)
	{
	    char op;
	    int x; cin>>op>>x;
	    
	    if(op=='+')
	    {
	        freq[x]++;
	        if(freq[x]==2) n2++;
	        if(freq[x]==4) n4++;
	        if(freq[x]==6) n6++;
	        if(freq[x]==8) n8++;
	    }
	    else
	    {
	        if(freq[x]==2) n2--;
	        if(freq[x]==4) n4--;
	        if(freq[x]==6) n6--;
	        if(freq[x]==8) n8--;
	        freq[x]--;
	    }
	    
	    if(n8>=1 || (n6>=1 && n2>=2) || n4>=2 || (n4>=1 && n2>=3)) cout<<"YES"<<nl;
	    else cout<<"NO"<<nl;
	}
}
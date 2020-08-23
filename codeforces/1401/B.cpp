#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int T; cin>>T;
	
	while(T--)
	{
	    int x0,x1,x2,y0,y1,y2; cin>>x0>>x1>>x2>>y0>>y1>>y2;
	    
	    int score = min(x2,y1);
	    x2-=score;
	    y1-=score;
	    x0+=x2;
	    
	    int sub = min(x0,y2);
	    x0-=sub;
	    y2-=sub;
	    
	    int lose = min(y2,x1);
	    cout<<(score-lose)*2<<nl;
	}
}
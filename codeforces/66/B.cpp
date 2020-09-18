#include <bits/stdc++.h>

#define nl "\n"

#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

#define FOR(i,k,n) for(int i=k;i<n;i++)

#define sz(vec) (int)vec.size()>

using namespace std;

void solve(/*int caseN*/)
{
    int N; cin>>N;
    
    if(N==1)
    {
        cout<<1;
        return;
    }
    
    vector<int> a(N);
    vector<int> opt;
    
    for(auto &x:a) cin>>x;
    
    int ans=0;
    for(int i=0;i<N;i++)
    {
        int maxIndex=i,maxIndex2=i;
        int pos1=1,pos2=0;
        while(maxIndex > 0 && a[maxIndex-1] <= a[maxIndex])
        {
            pos1++;
            maxIndex--;
        }
        while(maxIndex2 < N-1 && a[maxIndex2+1] <= a[maxIndex2])
        {
            pos2++;
            maxIndex2++;
        }
        ans=max(ans,pos1+pos2);
    }
    cout<<ans;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//int T; cin>>T;
	//while(T--)
	    solve(/*T+1*/);
}
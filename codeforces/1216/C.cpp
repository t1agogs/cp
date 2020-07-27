#include <bits/stdc++.h>

using namespace std;

struct Rect
{
    long long x1,x2,y1,y2;
    long long area() {return (x2-x1)*(y2-y1);}
};

long long intersect(Rect a, Rect b)
{
    long long xOverlaping=max(0LL,min(a.x2,b.x2)-max(a.x1,b.x1));
    long long yOverlaping=max(0LL,min(a.y2,b.y2)-max(a.y1,b.y1));
    return xOverlaping*yOverlaping;
}

Rect intersectRect(Rect a, Rect b)
{
    Rect x;
    long long xOverlaping=max(0LL,min(a.x2,b.x2)-max(a.x1,b.x1));
    if(xOverlaping<=0)
    {
        x.x1=0; x.x2=0; x.y1=0; x.y2=0;
        return x;
    }
    long long x2=max(0LL,min(a.x2,b.x2));
    long long x1=max(0LL,max(a.x1,b.x1));
    long long y2=max(0LL,min(a.y2,b.y2));
    long long y1=max(0LL,max(a.y1,b.y1));
    x.x1=x1; x.x2=x2; x.y1=y1; x.y2=y2;
    
    return x;
}

int main()
{
		ios::sync_with_stdio(0); cin.tie(0);
        
        Rect a,b,c;
        
        cin>>a.x1>>a.y1>>a.x2>>a.y2;
        cin>>b.x1>>b.y1>>b.x2>>b.y2;
        cin>>c.x1>>c.y1>>c.x2>>c.y2;
        
        long long num=a.area()+intersect(intersectRect(c,a),b)-intersect(a,c)-intersect(b,a);
        if(num>0) cout<<"YES";
        else cout<<"NO";
}
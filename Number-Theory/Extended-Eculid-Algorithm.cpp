#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int extendedEuclid(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int d=extendedEuclid(b,a%b,x1,y1);
    x=x1;
    y=x1-(y1*(a/b));
    return d;
}
//all value
struct triplet
{
    int x,y,gcd;
};
triplet extenEuclid(int a,int b)
{
    if(b==0)
    {
        triplet ans;
        ans.x=1;
        ans.gcd=a;
        ans.y=0;
        return ans;
    }
    triplet smallAns=extenEuclid(b,a%b);
    triplet ans;
    ans.gcd=smallAns.gcd;
    ans.x=smallAns.y;
    ans.y=smallAns.x-(a/b)*smallAns.y;
    return ans;
}
signed main()
{
    int a,b;
    cin>>a>>b;
    //all value
    triplet ans=extenEuclid(a,b);
    cout<<ans.gcd<<" "<<ans.x<<" "<<ans.y<<endl;
}
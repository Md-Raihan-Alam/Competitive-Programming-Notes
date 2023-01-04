// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A
#include<bits/stdc++.h>
#define int long long
using namespace std;
int w,h,n;
bool good(int x)
{
    return (x/w)*(x/h)>=n;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>w>>h>>n;
    int l=0;//l is bad
    int r=1e9;//r is good
    // while(!good(r))
    //     r<<=2;
    while(r>l+1)
    {
        int m=(l+r)/2;
        if(good(m))
        {
            r=m;
        }else{
            l=m;
        }
    }
    cout<<r<<endl;
    return 0;
}
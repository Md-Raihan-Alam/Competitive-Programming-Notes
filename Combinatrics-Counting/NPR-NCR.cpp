#include<iostream>
#define int long long
using namespace std;
int NCR(int n,int r)
{
    int N=1;
    int R=1;
    int NR=1;
    for(int i=n;i>(n-r);i--)
        N*=i;
    for(int j=r;j>=1;j--)
        R*=j;
    return N/R;
}
int NPR(int n,int r)
{
    int N=1;
    for(int i=n;i>(n-r);i--)
        N*=i;
    return N;
}
signed main()
{
    int n,r;
    cin>>n>>r;
    cout<<NCR(n,r)<<" "<<NPR(n,r)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int power(int a,int n,int p)
{
    int res=1;
    while(n)
    {
        if(n%2!=0)
        {
            res=(res*a)%p;
            n--;
        }
        else{
            a=(a*a)%p;
            n/=2;
        }
    }
    return res;
}
int main()
{
    int a,n,p;
    cin>>a>>n>>p;
    cout<<power(a,n,p);
    return 0;
}
#include<iostream>
using namespace std;
int power(int a,int n)
{
    int res=1;
    while(n)
    {
        if(n%2!=0)
        {
            res*=a;
            n--;
        }
        else{
            a*=a;
            n/=2;
        }
    }
    return res;
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<power(a,n);
    return 0;
}
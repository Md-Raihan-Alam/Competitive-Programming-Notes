#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    cout<<gcd(4,12)<<endl;
    cout<<__gcd(12,18)<<endl;//built in function
    cout<<(4*12)/gcd(4,12)<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
int target=999;
int sumDivisible(int n)
{
    int p=target/n;
    return (n*(p*(p+1)))/2;
}
signed main()
{
    int sum=0;
    //brute force
    for(int i=1;i<1000;i++)
    {
        if(i%6==0 || i%8==0)
            sum+=i;
    }
    cout<<sum<<endl;
    int lcm=6*8/(__gcd(6,8));
    cout<<lcm<<endl;
    //O(1)/O(logN)
    cout<<sumDivisible(6)+sumDivisible(8)-sumDivisible(lcm)<<endl;
    //brute force
    for(int i=1;i<1000;i++)
    {
        if(i%3==0 || i%5==0)
            sum+=i;
    }
    cout<<sum<<endl;
    int lcm=3*5/(__gcd(3,5));
    cout<<lcm<<endl;
    //O(1)/O(logN)
    cout<<sumDivisible(3)+sumDivisible(5)-sumDivisible(lcm)<<endl;
    return 0;
}

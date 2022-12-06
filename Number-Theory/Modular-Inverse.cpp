#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int modularExponentiation(int a,int n,int m)
{
    int ans=1;
    while(n)
    {
        if(n%2!=0)
        {
            ans=(ans*a)%m;
            n--;
        }else{
            a=(a*a)%m;
            n/=2;
        }
    }
    return ans;
}
signed main()
{
    //(a/b)%m
    //from fermat's little theorem=a^p-1=1modp
    //                            =(a^p-1)/a=1/a modp
    //                            =a^p-2=a^-1 modp
    //and to find modulo inverse, n and modulo p must be co prime so all numbers do not have modular inverse
    //so (a/b)%m
    //  =(a*b^-1)%m
    //  =(a%m)*(b^-1)%m
    //  =(a%m)*((b^p-2)%m)%m, from  fermat's little theorem
    //so finding modular inverse
    //(b^p-2)%m
    int b,p;
    cin>>b>>p;
    cout<<modularExponentiation(b,p-2,p)<<endl;//modular inverse answer
    //now 
    int a;
    cin>>a>>b>>p;
    int A=a%p;
    int B=modularExponentiation(b,p-2,p)%p;
    cout<<(A*B)%p<<endl;
    return 0;
}
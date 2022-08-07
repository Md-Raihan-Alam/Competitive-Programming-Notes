#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int flag=1;
    if(n<=1)
        cout<<"NO\n";
    else {
        for(long long int i=2;i*i<=n;i++)
        {
            if(n%i==0){
                flag=0;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
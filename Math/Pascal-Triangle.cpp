#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n+1;i++){
        int num=1;
        for(int space=n-i;space>0;space--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=num*(i-j)/j;
        }
        cout<<endl;
    }
    return 0;
}
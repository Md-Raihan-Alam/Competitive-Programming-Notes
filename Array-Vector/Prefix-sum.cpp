#include<iostream>
using namespace std;
void prefixSum(){
    //from tutorial (bootcamp)
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long pf[n+1];
    pf[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pf[i]=pf[i-1]+a[i];
    }
    while(q--){
        int l,r;
        long long sum=0;
        if(l==1)
        {
            sum=pf[r-1];
        }
        else {
            sum=pf[r-1]-pf[l-2];
        }
        cout<<sum<<endl;
    }
}
int main()
{
    long long n,q;
    cin>>n>>q;
    long long a[n];
    for(long long i=0;i<n;i++)
        cin>>a[i];
    // for(int i=1;i<=q;i++){
    //     int l,r;
    //     cin>>l>>r;
    //     l--;r--;
    //     long long sum=0;
    //     for(int j=l;j<=r;j++)
    //         sum+=a[j];
    //     cout<<sum<<endl;
    // }
    //time complexity=o(n^2)
    long long pf[n]={0};
    for(int i=0;i<n;i++){
        if(i==0) pf[i]=a[i];
        else
            pf[i]=pf[i-1]+a[i];
    }
    for(int i=0;i<n;i++)
        cout<<pf[i]<<" ";
    cout<<endl;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        // cout<<pf[r]<<" "<<pf[l-1]<<endl;
        // cout<<pf[r-1]<<endl;
        //cout<<pf[]
        if(l==r)
            cout<<pf[r-1]<<endl;
        // else if(l==1){
        //     cout<<pf[r-1]<<endl;
        // }
        else{
            cout<<pf[r-1]-pf[l-2]<<endl;
        }
    }
    return 0;
}
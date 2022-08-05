#include<iostream>
using namespace std;
void freArray(){
    //from tutorial (bootcamp)
    int n=8;
    int a[8]={5,8,7,5,8,7,5,7};
    int fre[9]={0};
    for(int i=0;i<n;i++){
        int x=a[i];
        fre[x]++;
    }
    for(int i=0;i<n;i++)
    {
        int x=a[i];
        cout<<a[i]<<": "<<fre[x]<<endl;
    }
}
int main()
{
    //frequency array limit is 10^6
    int n;
    cin>>n;
    int arr[n];
    int maxi=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(maxi<arr[i])
            maxi=arr[i];
    }
    int fre[maxi+1]={0};
    for(int i=0;i<n;i++)
    {
        // int x=arr[i];
        // fre[x]++;
        //can be written as
            fre[arr[i]]++;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int num;
        cin>>num;
        cout<<num<<": "<<fre[num]<<endl;
    }
    return 0;
}
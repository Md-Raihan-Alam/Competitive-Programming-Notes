#include<iostream>
using namespace std;
void combine(int a[],int s,int m,int e)
{
    int *buffer=new int[e+1];//for the total size of the merged array
    int k=s;
    while(k<=e)
    {
        buffer[k]=a[k];
        k++;
    }
    int i=s;
    int j=m+1;
    k=s;
    while(i<=m && j<=e)
    {
        if(buffer[i] <= buffer[j])
        {
            a[k]=buffer[i];
            i++;
        }else{
            a[k]=buffer[j];
            j++;
        }
        k++;
    }
    while(i<=m)
    {
        a[k]=buffer[i];
        i++;
        k++;
    }
    while(j<=e)
    {
        a[k]=buffer[j];
        j++;
        k++;
    }
    delete [] buffer;
}
//auxiliary function
void mrgSort(int a[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int m=(s+e)/2;
    mrgSort(a,s,m);
    mrgSort(a,m+1,e);
    combine(a,s,m,e);
}
void mrgSort(int a[],int n)//wrapper function
{
    mrgSort(a,0,n-1);
}
void display(int a[],int n)
{
    int i=0;
    while(i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    cout<<endl;
}
int main()
{
    int a[]={50,32,43,65,12,76,9,54,76,12,6,2,-6,-76,32,-98,34,110,34,12};
    int n=sizeof(a)/sizeof(int);
    cout<<"Before sorting:"<<endl;
    display(a,n); 
    mrgSort(a,n);
    cout<<"After sorting:"<<endl;
    display(a,n);
    return 0;
}
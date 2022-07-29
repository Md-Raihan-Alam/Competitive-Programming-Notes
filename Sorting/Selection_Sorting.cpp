#include<iostream>
using namespace std;
void swapping(int a[],int x,int y)
{
    int temp=a[x];
    a[x]=a[y];
    a[y]=temp;
}
int locOfSmallest(int a[],int s,int e)
{
    int i=s;
    int j=i;
    while(i<=e)
    {
        if(a[i]<a[j])//ascending or descending
        {
            j=i;
        }
        i++;
    }
    return j;
}
void selSort(int a[],int n)
{
    int i=0;
    while(i<n-1)
    {
        int j=locOfSmallest(a,i,n-1);
        swapping(a,i,j);
        i++;
    }
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
    int a[]={50,32,110,34,12};
    int n=sizeof(a)/sizeof(int);
    cout<<"Before sorting:"<<endl;
    display(a,n);
    selSort(a,n);
    cout<<"After sorting:"<<endl;
    display(a,n);
    return 0;
}
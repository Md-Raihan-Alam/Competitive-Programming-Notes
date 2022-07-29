#include<iostream>
using namespace std;
void insertIth(int a[],int n,int i)
{
    int key=a[i];
    int j=i-1;
    while(j>=0 && a[j]>key)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
}
int insSrot(int a[],int n)
{
    int i=1;
    while(i<n)
    {
        insertIth(a,n,i);
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
    insSrot(a,n);
    cout<<"After sorting:"<<endl;
    display(a,n);
    return 0;
}
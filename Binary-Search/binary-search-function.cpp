#include<bits/stdc++.h>
using namespace std;
int binary_search_index(vector<int> v,int search)
{
    int l=0;
    int r=v.size()-1;
    while(r>=l)
    {
        int m=(l+r)/2;
        if(v[m]==search)
        {
            return m;
        }else if(v[m]<search)
        {
            l=m+1;
        }else if(v[m]>search)
        {
            r=m-1;
        }
    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        int m;
        int l=0;
        int r=n-1;
        bool ok=false;
        while(r>=l)
        {
            m=(l+r)/2;
            if(v[m]==x)
            {
                ok=true;
                break;
            }else if(v[m]<x)
            {
                l=m+1;
            }else if(v[m]>x)
            {
                r=m-1;
            }
        }
        if(ok){
            cout<<m<<endl;
            cout<<"YES\n";
        }else{
            cout<<-1<<endl;
            cout<<"NO\n";
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
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
        int l=-1;//v[i]<x
        int r=n;//v[i]>=x
        while(r>l+1)
        {
            int m=(r+l)/2;
            if(v[m]<x)
            {
                l=m;
            }else{
                r=m;
            }
        }
        //  function returns an iterator pointing to the next smallest number just greater than or equal to that number.
        //  If there are multiple values that are equal to val, lower_bound() returns the iterator of the first such value.
        cout<<r+1<<endl;
    }
}
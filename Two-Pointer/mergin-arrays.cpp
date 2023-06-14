#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    vector<int> v2(m);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int j=0;j<m;j++) 
        cin>>v2[j];
    int i=0;
    int j=0;
    int k=0;
    int sum=n+m;
    vector<int> c(sum);
    while(1)
    {
        if(i==n && j==m)
            break;
        if(i<n)
        {
            if(v[i]<=v2[j] && j<m)
            {
                c[k]=v[i];
                k++;
                i++;
            }
            if(j==m)
            {
                c[k]=v[i];
                k++;
                i++;
            }
        }
        if(j<m)
        {
            if(v2[j]<=v[i] && i<n)
            {
                c[k]=v2[j];
                j++;
                k++;
            }
            if(i==n)
            {
                c[k]=v2[j];
                j++;
                k++;
            }
        }
    }
    for(auto x:c)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
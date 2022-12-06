#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<vector<int>> ans;
vector<vector<int>> ans2;
void permute(vector<int> &a,int idx)
{
    if(idx==a.size())
    {
        ans.push_back(a);
        return ;
    }
    for(int i=idx;i<a.size();i++)
    {
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return ;
}
void stlPermutation()
{
    int n1;
    cin>>n1;
    vector<int> a(n1);
    for(auto &i:a)
        cin>>i;
    sort(a.begin(),a.end());
    do{
        ans2.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
    for(auto x:ans2)
    {
        for(auto y:x)
            cout<<y<<" ";
        cout<<endl;
    }
}
signed main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    permute(v,0);
    for(auto x:ans)
    {
        for(auto y:x)
            cout<<y<<" ";
        cout<<endl;
    }
    //stl way
    stlPermutation();
    
    return 0;
}
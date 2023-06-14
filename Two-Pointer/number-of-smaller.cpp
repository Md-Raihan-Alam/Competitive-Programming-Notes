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
    vector<int> ans;
    int cnt=0;
    while(1)
    {
        if(j==m)
        {
            break;
        }
        if(v[i]<v2[j] && i<n)
        {
            cnt++;
            i++;
            continue;
        }
        if(v[i]>=v2[j] && i<n)
        {
            ans.push_back(cnt);
            j++;
            continue;
        }
        ans.push_back(cnt);
        j++;
    }
    for(auto x:ans)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
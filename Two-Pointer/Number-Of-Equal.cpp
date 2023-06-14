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
    int cnt=0;
    int temp=j;
    while(i<n || j<m)
    {
        if(v[i]==v2[j])
        {
            temp=j;
            while(1)
            {
                if(v[i]!=v2[temp] || temp>=m)
                    break;
                cnt++;
                temp++;
            }
            if(i<n)
                i++;
            continue;
        }
    if(j<m && v[i]>v2[j])
    {
        j++;
        continue;
    }
        i++;
        // cout<<i<<" "<<j<<endl;
    }
    cout<<cnt<<endl;
    return 0;
}
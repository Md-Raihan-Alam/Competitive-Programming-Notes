// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    while(k--)
    {
        int num;
        cin>>num;
        cout<<lower_bound(v.begin(),v.end(),num)-v.begin()+1<<endl;
    }
    return 0;
}
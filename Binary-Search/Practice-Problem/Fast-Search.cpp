// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
#define endl "\n"
using namespace std;
signed main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int k;
    cin>>k;
    sort(v.begin(),v.end());
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        int left=lower_bound(v.begin(),v.end(),l)-v.begin();
        int right=upper_bound(v.begin(),v.end(),r)-v.begin();
        cout<<right-left<<endl;
    }
    return 0;
}
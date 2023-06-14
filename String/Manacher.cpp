#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
    ///0 based index
    ///d1[i] = i center dhore koyta odd palindrome ase
    ///d2[i] = koyta even , 2 ta mider 2nd ta center
vector<vector<int>> manacher(string s,int n)
{
    vector<int> d1(n);
    vector<int> d2(n);
    int l = 0, r = -1;
    for(int i=0;i<n;i++) {
    int k = (i > r ? 1 : min(d1[l+r-i], r-i));
    while(i-k >= 0 && i+k < n && s[i-k] == s[i+k]) ++k;
    d1[i] = k--;
    if(i+k > r) l = i-k, r = i+k;
    }
    l = 0, r = -1;
    for(int i=0;i<n;i++) {
    int k = (i > r? 0: min(d2[l+r-i+1], r-i+1))+1;
    while(i-k >= 0 && i+k-1 < n && s[i-k] == s[i+k-1]) ++k;
    d2[i] = --k;
    if(i+k-1 > r) l = i-k, r = i+k-1;
    }
    vector<vector<int>> ans;
    ans.push_back(d1);
    ans.push_back(d2);
    return ans;
}
signed main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    // kiomaramol - 7 odd palindrome
// abcddcbaghfjpoiuuiop - 8 even palindrome
    vector<vector<int>> ans=manacher(s,n);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
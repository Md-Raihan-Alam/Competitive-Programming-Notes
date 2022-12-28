#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
//returns the longest proper prefix array of pattern p
//where lps[i]=longest proper prefix which also suffic of p[0...i]
vector<int> build_lps(string p)
{
    int sz=p.size();
    vector<int> lps;
    lps.assign(sz+1,0);
    int j=0;
    lps[0]=0;
    for(int i=1;i<sz;i++)
    {
        while(j>0 && p[i]!=p[j])
        {
            if(j>=1)
                j=lps[j-1];
            else
                j=-1;
        }
        j++;
        lps[i]=j;
    }
    return lps;
}
//return matche in vector ans in 0 indexed
vector<int> ans;
void kmp(vector<int> lps,string s,string p)
{
    int psz=p.size(),sz=s.size();
    int j=0;
    for(int i=0;i<sz;i++)
    {
        while(j>=0 && p[j]!=s[i])
        {
            if(j>=1)
                j=lps[j-1];
            else
                j=-1;
        }
        j++;
        if(j==psz)
        {
            j=lps[j-1];
            //pattern found in string s at position i-psz+1
            ans.push_back(i-psz+1);
        }
        //after each loop we have j=longest common suffx of s[0...i] which is also prefix of p
    }
}
signed main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            break;
        }
        ans.clear();
        string s;
        string p;
        cin>>s;
        cin>>p;
        vector<int> lps=build_lps(p);
        kmp(lps,s,p);
        for(auto x:ans)
            cout<<"pattern found at index "<<x<<endl;
        cout<<endl;
    }
    return 0;
}
//test cases
// 1
// this-is-a-test-text
// test
// 1
// AABAACAADAABAABA
// AABA
// 1
// AABAACAADAABAABA
// OPOP
// 0
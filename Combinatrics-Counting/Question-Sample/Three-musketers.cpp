// https://www.hackerearth.com/problem/algorithm/the-three-musketeers-6efd5f2d/
#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
vector<string> subsets(string s)
{
    int sz=(1<<s.size());
    vector<string> ans;
    for(int mask=0;mask<sz;++mask)
    {
        string subset;
        for(int bit=0;bit<s.size();bit++)
        {
            if(mask & (1<<bit))
                subset.push_back(s[bit]);
        }
        if(subset.size())
            ans.push_back(subset);
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str[n];
        for(int i=0;i<n;i++)
            cin>>str[i];
        unordered_map<string,int> ump;
        for(int i=0;i<n;i++)
        {
            set<char> s;
            for(char ch:str[i])
                {
                    if(isVowel(ch)){
                        s.insert(ch);
                    }
                        
                }
            string vs;
            for(char ch:s)
                vs.push_back(ch);
            vector<string> allSubsets=subsets(vs);
            for(string vowel_sub:allSubsets)
                ump[vowel_sub]++;
        }
        long long ans=0;
        for(auto &pr:ump)
        {
            if(pr.second<3)
                continue;
            long long ct=pr.second;
            long long ways=ct*(ct-1)*(ct-2)/6;
            if(pr.first.size()%2==0)
                ans-=ways;
            else
                ans+=ways;
        }
        cout<<ans<<"\n";
    }
}
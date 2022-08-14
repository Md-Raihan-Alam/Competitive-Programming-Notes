#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7,N=1e5+3;
int p=31;//must be at least 27
vector<long long> powers(N);
long long calculate_hash(string s)
{
    powers[0]=1;
    for(long long i=1;i<N;i++)
        powers[i]=(powers[i-1]*p)%m;
    long long hash=0;
    for(long long i=0;i<s.size();i++)
    {
        hash=(hash+(s[i]-'a'+1)*powers[i])%m;
    }
    return hash;
}
//single hash
vector<long long> making_hashes(vector<string> str)
{

    powers[0]=1;
    for(long long i=1;i<N;i++)
        powers[i]=(powers[i-1]*p)%m;
    vector<long long> tempHash;
    for(auto w:str)
    {
        tempHash.push_back(calculate_hash(w));
    }
    return tempHash;
}
//for pair
vector<pair<long long,int>> goup_identical_Strings(vector<string> s)
{
    int n=s.size();
    vector<pair<long long,int>> tempHashes(n);
    for(int i=0;i<n;i++)
    {
        tempHashes[i]={calculate_hash(s[i]),i};
    }
    return tempHashes;
}
int main()
{
    vector<string> strings={"aa","ab","aa","b","cc","aa","cd"};
    vector<string> strngsTwo={"aa","ab","aa","cd","cd","ee"};
    vector<vector<int>> groups;
    vector<long long> hashes=making_hashes(strings);
    vector<pair<long long,int>> tempPairHashes=goup_identical_Strings(strngsTwo);
    sort(tempPairHashes.begin(),tempPairHashes.end());
    for(int i=0;i<tempPairHashes.size();i++)
    {
        if(i==0 or tempPairHashes[i].first!=tempPairHashes[i-1].first)
            groups.emplace_back();
            groups.back().push_back(tempPairHashes[i].second);
    }
    cout<<groups.size()<<endl;
    sort(hashes.begin(),hashes.end());
    long long distinct=0;
    for(long long i=0;i<hashes.size();i++)
    {
        if(i==0 or hashes[i]!=hashes[i-1])
            distinct++;
    }
    cout<<distinct<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void getZarr(string str,int z[]);
//print all occurrenceces of pattern in text using z algo
vector<int> ans;
void search(string text,string pattern)
{
    //create concatenated string "P$T"
    string concat=pattern+"$"+text;
    int l=concat.length();
    //contruct z array
    int z[l];
    getZarr(concat,z);
    //not looping through z array for matching condition
    for(int i=0;i<l;i++)
    {
        //if z[i](matched region) is equal to pattern
        //length we got the pattern
        if(z[i]==pattern.length())
        {
            ans.push_back(i-pattern.length()-1);
        }
    }
}
//Fills array for given string str[]
void getZarr(string str,int z[])
{
    int n=str.length();
    int l,r,k;
    //[l,r] makes a window which matches with prefix of s
    l=r=0;
    for(int i=1;i<n;i++)
    {
        //ifr> nothing matches so we will calculate
        //z[i] using naiv weay
        if(i>r)
        {
            l=r=i;
            //r-l=0 in starting, s it will start
            //checking from 0'th index.for eample
            //for "ababab" and i=1,the value of R
            //ramins 0 and z[i] becomes 0. For tring
            //"aaaaaa" and i=1,z[i] and r become 5
            while(r<n && str[r-l]==str[r])
                r++;
            z[i]=r-l;
            r--;
        }else{
            //k=i-l so k corresponds to number which
            //matches in [l,r] interval
            k=i-l;
            //if z[k] is less than remaining interval
            //then z[i] wil be equal to z[k]
            //for eaxmple,str="ababab", i=3, r=5
            //and l=2
            if(z[k]<r-i+1)
                z[i]=z[k];
            //for example tr="aaaaaa" and i=2,r is 5
            //l is 0
            else{
                //else sstart from r and check amnually
                l=i;
                while(r<n && str[r-l]==str[r])
                    r++;
                z[i]=r-l;
                r--;
            }
        }
    }
}
signed main()
{
    string s;
    string p;
    cin>>s>>p;
    ans.clear();
    //O(m+n)
    search(s,p);
    for(auto x:ans)
    {
        cout<<"Pattern found at index "<<x<<endl;
    }
    return 0;
}
// this-is-a-test-text
// test
// AABAACAADAABAABA
// AABA
// AABAACAADAABAABA
// OPOP
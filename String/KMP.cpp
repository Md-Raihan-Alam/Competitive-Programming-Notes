#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<int> ans;
void KMP(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    int lps[m];
    lps[0] = 0;

    int j = 0;
    for (int i = 1; i < m;) {
        if (pattern[i] == pattern[j]) {
            lps[i] = j + 1;
            i++;
            j++;
        } else {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    int i = 0;
    j = 0;
    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }

        if (j == m) {
            cout << "Pattern found at index " << i - j << endl;
            ans.push_back(i-j);
            j = lps[j - 1];
        }

        else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
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
        KMP(s,p);
        for(auto x:ans)
            cout<<x<<endl;
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
//modify it
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string t;
    cin>>s>>t;
    string subString="";
    int cnt=0;
    bool flag=false;
    for(int i=0;i<(s.size()-2)+1;i++)
    {
        string str=s.substr(i,2+i-cnt);
        cnt++;
        int cnt2=0;
        for(int j=0;j<(t.size()-2)+1;j++)
        {
            string str2=t.substr(j,2+j-cnt2);
            cnt2++;
            if(str==str2)
            {
                flag=true;
                subString=str2;
                break;
            }
        }
        if(flag)
            break;
    }
    map<string,bool> m2;
        for(int i = 0; i < s2.size() - 1; i++){
            string t = "";
            t.push_back(s2[i]);
            t.push_back(s2[i+1]);
            m2[t] = 1;
        }
        for(int i = 0; i < s1.size() - 1; i++){
            string t = "";
            t.push_back(s1[i]);
            t.push_back(s1[i+1]);
            if(m2[t] == 1){
                cout<<"YES";dl
                cout<<"*"<<t<<"*";
                dl
                return;
            }
        }
}
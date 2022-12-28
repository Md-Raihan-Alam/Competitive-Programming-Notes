#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<string> split(string str, char del){
    vector<string> ans;
      string temp = "";
   
      for(int i=0; i<(int)str.size(); i++){
         if(str[i] != del){
            temp += str[i];
        }
          else{
            ans.push_back(temp);
              temp = "";
        }
    }
       
      ans.push_back(temp);
    return ans;
}

signed main()
{
    string s1;
    char s2;
    cin>>s1>>s2;
    vector<string> res=split(s1,s2);
    for(auto x:res)
        cout<<x<<endl;
    return 0;
}
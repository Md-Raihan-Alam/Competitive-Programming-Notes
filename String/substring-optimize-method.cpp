//it takes more space complexity
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //first loop for starting index
    for(int i=0;i<s.size();i++)
    {
        string sub;
        //second loop is generating sub-string
        for(int j=i;j<s.size();j++)
        {
            sub+=s[j];
            cout<<sub<<endl;
        }
    }
    return 0;
}
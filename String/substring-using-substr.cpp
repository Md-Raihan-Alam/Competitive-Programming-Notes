#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        for(int j=1;j<=s.size()-i;j++)
        {
            cout<<s.substr(i,j)<<endl;
        }
    }
    return 0;
}
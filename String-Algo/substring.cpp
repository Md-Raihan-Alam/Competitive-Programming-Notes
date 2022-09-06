#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //pick starting point
    for(int i=1;i<=s.length();i++)
    {
        //pick ending point
        for(int j=0;j<=s.size()-i;j++)
        {
            //print characters from current
            //starting point ot current ending
            //point
            int k=j+i-1;
            for(int l=j;l<=k;l++)
            {
                cout<<s[l];
            }
            cout<<endl;
        }
    }
    return 0;
}
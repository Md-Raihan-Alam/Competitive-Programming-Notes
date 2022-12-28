//time complexity=O(n*2^n)
#include<iostream>
#include<string>
using namespace std;
void printSubSeq(string str,int n,int index=-1,string curr="")
{
    if(index==n)
        return;
    if(!curr.empty())
    {
        cout<<curr<<endl;
    }
    for(int i=index+1;i<n;i++)
    {
        curr+=str[i];
        printSubSeq(str,n,i,curr);
        //backtracking
        curr=curr.erase(curr.size()-1);
    }
    return ;
}
int main()
{
    string str;
    cin>>str;
    printSubSeq(str,str.size());
    return 0;
}
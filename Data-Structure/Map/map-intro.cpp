// a simple map demonstration
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int>m;
    int i;
    //put pairs into map
    for(i=0;i<10;i++){
        m.insert(pair<char,int>('A'+i,i));// enter value
        //this is also valid
        //m.insert(make_pair((char)('A'+i),i))
    }
    char ch;
    cout<<"Enter key: ";
    cin>>ch;
    map<char,int>::iterator p;
    //find value give key
    p=m.find(ch);
    if(p!=m.end())
        cout<<p->second;
    else
        cout<<"Key not in map\n";
    return 0;
}
#include<iostream>
#include<map>
using namespace std;
int main()
{
    //key,value
    map<string,int> m;
    m["monekey"]=4;
    m["banana"]=3;
    m["apple"]=9;
    cout<<m["banana"]<<'\n';
    //if value of a key is not present then it is created with default value of 0
    map<string,int> m2;
    cout<<m2["data"]<<'\n';
    //to check if key exists
    if(m.count("apple"))
    {
        cout<<"apple value is "<<m["apple"];
    }
    //print all keys and values
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<'\n';
    }
    return 0;
}   
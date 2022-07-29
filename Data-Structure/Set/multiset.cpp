#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    cout<<s.count(5)<<'\n';
    //erase all data
    //s.erase(5)
    //to remoe one instance
    s.erase(s.find(5));
    cout<<s.count(5)<<'\n';
    return 0;
}
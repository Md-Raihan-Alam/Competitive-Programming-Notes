#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    //enter data
    s.insert(3);
    s.insert(2);
    s.insert(5);
    //count data
    cout<<s.count(3)<<"\n";
    cout<<s.count(4)<<"\n";
    //erase data
    s.erase(3);
    s.insert(4);
    cout<<s.count(3)<<'\n';
    cout<<s.count(3)<<'\n';
    //running through data
    set<int> s2={2,5,6,8};
    //checking the size
    cout<<s.size()<<'\n';
    for(auto x:s) cout<<x<<" ";
    cout<<'\n';
    //set do not take duplicates
    s2.insert(5);
    s2.insert(5);
    s2.insert(5);
    cout<<s2.count(5)<<'\n';
    //find set data
    s2.find(6);
    //clear data
    s2.clear();
}
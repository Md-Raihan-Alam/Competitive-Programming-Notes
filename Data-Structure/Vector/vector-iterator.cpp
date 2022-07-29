#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;//create zero-length vector
    int i;
    //put values into a vector
    for(i=0;i<10;i++) v.push_back(i);
    //can access vector contents using subscripting
    for(i=0;i<10;i++) cout<<v[i]<<" ";
    cout<<endl;
    //access via iterator
    vector<int>::iterator p=v.begin();
    while(p!=v.end()){
        cout<<*p<<" ";
        p++;
    }
    return 0;
}
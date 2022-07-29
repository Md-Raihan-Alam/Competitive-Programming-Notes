#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5,1);//create 5-element vector of 1s
    int i;
    //display original contents of vector
    cout<<"Size="<<v.size()<<endl;
    cout<<"Original contents:\n";
    for(i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl<<endl;
    vector<int>::iterator p=v.begin();
    p+=2;//point ot 3rd elemnts
    //insert 10 elements with value 9
    v.insert(p,10,9);
    //display contents after insertion
    cout<<"Size after insert = "<<v.size()<<endl;
    cout<<"Contents after insert:\n";
    for(i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl<<endl;
    //remove those elements
    p=v.begin();
    p+=2;//point to 3rd element
    v.erase(p,p+10);//remove next 10 elements
    //display contents after deletion
    cout<<"Siee after erase= "<<v.size()<<endl;
    cout<<"Contents after erase:\n";
    for(i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}

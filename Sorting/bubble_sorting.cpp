#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter a number N:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        v.push_back(rand());
    }
    cout<<"Before sorted:"<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size()-1;j++){
            if(v[j]>v[j+1])//ascending or descending
                swap(v[j],v[j+1]);
        }
    }
    cout<<"\nAfter sorted:"<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}
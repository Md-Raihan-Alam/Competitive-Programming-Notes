#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int ns,np,nsh;
    cin>>ns>>np>>nsh;
    vector<int> v(ns);
    vector<int> v2(np);
    vector<int> v3(nsh);
    for(int i=0;i<ns;i++)
        cin>>v[i];
    for(int i=0;i<np;i++)
        cin>>v2[i];
    for(int i=0;i<nsh;i++) 
        cin>>v3[i];
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            for(int k=0;k<v3.size();k++)
                cout<<v[i]<<" "<<v2[j]<<" "<<v3[k]<<endl;
        }
    }
}

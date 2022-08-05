#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //pair<type,type> var;
    pair<string,int> pr={"Raihan",22};
    cout<<pr.first<<" "<<pr.second<<endl;
    //now vector pair
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    //for multiple values
    //vector<pair<int,int>,int> v;
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    cout<<endl;
    for(auto x:a)
        cout<<x.first<<" "<<x.second<<endl;
    //for sort
    sort(a.begin(),a.end());
    return 0;
}
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> mp;
    int n;
    cin>>n;
    //insert; time=logN
    for(int i=0;i<n;i++)
    {
        int a;
        string str;
        cin>>a>>str;
        mp.insert({a,str});
    }
    //find; time=logN
    int f;
    cin>>f;
    auto i=mp.find(f);
    if(i!=mp.end()){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
    cout<<mp.size()<<endl;
    //count;time=logN
    int f2;
    cin>>f2;
    if(mp.count(f2))
    {
        cout<<"found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
    cout<<mp.size()<<endl;
    //clear,erase
    int f3;
    cin>>f3;
    mp.erase(f3);
    cout<<mp.size()<<endl;
    mp.clear();
}

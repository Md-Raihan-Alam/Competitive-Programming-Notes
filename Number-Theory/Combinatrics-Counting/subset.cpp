#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int n,s;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int mask=1;mask<pow(2,n);mask++)
    {
        for(int i=0;i<n;i++){
            if(mask & (1<<i)){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
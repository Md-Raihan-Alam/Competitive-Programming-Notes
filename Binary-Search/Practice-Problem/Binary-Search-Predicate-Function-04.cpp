#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n,cows;
const int N=1e5+10;
vector<int> position(N);
//predicate function of true and false
bool trueFalse(int minDist)
{
    int lastPosition=-1;
    int totalCows=cows;
    for(int i=0;i<n;i++)
    {
        if(position[i]-lastPosition>=minDist || lastPosition==-1)
        {
            totalCows--;
            lastPosition=position[i];
        }
    }
    return totalCows==0?true:false;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>cows;
        for(int i=0;i<n;i++)
        {
            cin>>position[i];
        }
        sort(position.begin(),position.begin()+n);
        int lo=0,hi=1e9,mid;
        while(hi-lo>1)
        {
            int mid=(lo+hi)/2;
            if(trueFalse(mid))
            {
                lo=mid;
            }else{
                hi=mid-1;
            }
        }
        if(trueFalse(hi))
        {
            cout<<hi<<endl;
        }else{
            cout<<lo<<endl;
        }
    }
    return 0;
}
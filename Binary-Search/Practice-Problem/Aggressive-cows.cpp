// https://www.spoj.com/problems/AGGRCOW/
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n,cows;
const int N=1e5+10;
int positions[N];
bool trueFalse(int minDist)
{
    int lastPosition=-1;
    int totalCows=cows;
    for(int i=0;i<n;i++)
    {
        if(positions[i]-lastPosition>=minDist || lastPosition==-1)
        {
            totalCows--;
            lastPosition=positions[i];
        }
        if(totalCows==0)
            break;
    }
    return totalCows==0;
}
signed main()
{
    //step 1 - make a predicate function that returns true if all cows are set or false if not
    //step 2 - run a lopp in the predicate function that calculate the distance between the last cow from current cow to check if is below equal minimum distance
    //step 3 - run a binary loop using this predicate function
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>cows;
        for(int i=0;i<n;i++)
        {
            cin>>positions[i];
        }
        sort(positions,positions+n);
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
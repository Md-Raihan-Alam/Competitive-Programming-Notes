#include<bits/stdc++.h>
using namespace std;
vector<int> createSuffixSum(vector<int> arr, int n)
{
    vector<int> suffixSum(n,0);
    suffixSum[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suffixSum[i]=suffixSum[i+1]+arr[i];
    }
    return suffixSum;
}
int main()
{
    vector<int> arr={10,14,16,20};
    vector<int> suffixSum=createSuffixSum(arr,arr.size());
    cout<<"SUffix sum array: ";
    for(int i=0;i<arr.size();i++)
    {
        cout<<suffixSum[i]<<" ";
    }
}
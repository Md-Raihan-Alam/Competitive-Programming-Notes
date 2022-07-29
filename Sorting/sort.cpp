#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={1,5,7,32,76,-32,12,2,65};
    sort(v.begin(),v.end());
    /*for array
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted
    sort(arr, arr + n);
    */
   for(auto x:v) cout<<x<<" ";
}
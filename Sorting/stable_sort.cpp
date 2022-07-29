#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    stable_sort(a.begin(),a.end());
    for( auto x:a) cout<<x<<" ";
    /*for array 
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    stable_sort(arr, arr + n);
    */
    return 0;
}
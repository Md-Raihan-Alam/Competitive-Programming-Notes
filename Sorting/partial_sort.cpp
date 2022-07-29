// C++ program to demonstrate the use of
// std::partial_sort
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Defining the BinaryFunction
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    vector<int> v = { 1, 3, 1, 10, 3, 3, 7, 7, 8 }, i;
    vector<int> v2 = { 1, 3, 1, 10, 3, 3, 7, 7, 8 };
    vector<int>::iterator ip;
  
    // Using std::partial_sort
    std::partial_sort(v.begin(), v.begin() + 3, v.end());
  
    // Displaying the vector after applying
    // std::partial_sort
    for (ip = v.begin(); ip != v.end(); ++ip) {
        cout << *ip << " ";
    }
    cout<<endl;
     vector<int>::iterator ip2;
  
    // Using std::partial_sort
    partial_sort(v2.begin(), v2.begin() + 1, v2.end(), comp);
  
    // Displaying the vector after applying
    // std::partial_sort
    for (ip2 = v2.begin(); ip2 != v2.end(); ++ip2) {
        cout << *ip2 << " ";
    }
  
    return 0;
}
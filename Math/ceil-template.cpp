#include<iostream>
using namespace std;
int ceil(int x,int y)
{
    return ((x+y-1))/y;
}
int main()
{
    cout<<ceil(5,2)<<endl;
}
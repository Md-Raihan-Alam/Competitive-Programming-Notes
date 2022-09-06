#include<iostream>
using namespace std;
int round(int x,int y)
{
    if(x>0)
        return (x+y/2)/y;
    else
        return (x-y/2)/y;
}
int main()
{
    cout<<round(5,2)<<endl;
}
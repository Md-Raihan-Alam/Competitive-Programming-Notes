#include<iostream>
#include<cmath>
using namespace std;
int comp_double(double a,double b)
{
    if(fabs(a-b)<=1e-10)
    {
        return 0;
    }
    return a<b? -1:1;
}
int main()
{
    double d,d2;
    cin>>d>>d2;
    cout<<comp_double(d,d2)<<endl;
    return 0;
}
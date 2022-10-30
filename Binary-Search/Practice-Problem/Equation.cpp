#include<bits/stdc++.h>
using namespace std;
double n;
bool good(double x)
{
    return (pow(x,2)+sqrt(x))<=n;
}
int main()
{
    cin>>n;
    double a=1.0;
    double b=1.0;
    while(good(b)) b*=2;
    double l=a;
    double r=b;
    while(r-l>0.000001)
    {
        double m=(l+r)/2;
        if(good(m))
            l=m;
        else
            r=m;
    }
    printf("%.16f\n",l);
    return 0;
}
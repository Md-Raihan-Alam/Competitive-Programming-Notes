#include <bits/stdc++.h>
#define int long long
using namespace std;
string numberToString(int num)
{
    ostringstream str1;
    str1<<num;
    return str1.str();
}
int stringToNumber(string s)
{
    stringstream ss;
    ss<<s;
    int num;
    ss>>num;
    return num;
}
//optimized way
int palindromicNumber(int a,int b,int c,int startA,int startEnd,int lastLimit)
{
    int mx=0,db=1;
    while(a>c)
    {
        if(a%11==0)
        {
            b=startA;
            db=1;
        }else{
            b=lastLimit;
            db=11;
        }
        while(a>=b)
        {
            // cout<<"a "<<a<<" b "<<b<<" db "<<db<<endl;
            // break;
            int prod=a*b;
            // cout<<prod<<endl;
            if(prod<=mx)
            {
                break;
            }
            // cout<<prod<<endl;
            string s1=numberToString(prod);
            string s2=numberToString(prod);
            reverse(s1.begin(),s1.end());
            if(s2==s1)
            {
                mx=prod;
            }
            b-=db;
        }
        a--;
    }
    return mx;
}
signed main()
{
    int n;
    cin>>n;
    string s1,s2,s3;
    for(int i=0;i<n;i++)
    {
        s1.push_back('9');
        s2.push_back('9');
        if(i<n-1)
            s3.push_back('9');
    }
    int firstNumber=stringToNumber(s1);
    int secondNumber=stringToNumber(s2);
    int lastDigit=stringToNumber(s3);
    int mx=0;
    s2.pop_back();
    s2.push_back('0');
    int last=stringToNumber(s2);
    int answer=palindromicNumber(firstNumber,secondNumber,lastDigit,firstNumber,secondNumber,last);
    cout<<"ANSWER "<<answer<<endl;
    //brute force
    // cout<<firstNumber<<" "<<secondNumber<<" "<<lastDigit<<endl;
    for(int i=firstNumber;i>lastDigit;i--)
    {
        for(int j=secondNumber;j>=i;j--)
        {
            int prod=i*j;
            if(prod<=n)
                break;
            // cout<<prod<<endl;
            string check=numberToString(prod);
            string check2=numberToString(prod);
            reverse(check.begin(),check.end());
            if(check==check2)
            {
                // cout<<i<<" "<<j<<endl;
                mx=max(mx,prod);
                // return 0;
            }
        }
    }
    cout<<"HERE "<<mx<<"\n";
    // return 0;
    return 0;
}

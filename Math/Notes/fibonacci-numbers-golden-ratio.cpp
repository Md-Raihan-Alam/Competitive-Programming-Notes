/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int sum=0;
    int firstNum=1;
    int secondNum=2;
    int newNum=firstNum+secondNum;
    sum+=secondNum;
    while(1)
    {
        if(newNum>=4000000)
            break;
        if(newNum%2==0)
            sum+=newNum;
        firstNum=secondNum;
        secondNum=newNum;
        newNum=firstNum+secondNum;
    }
    cout<<sum<<endl;
    //we can pick the even numbers and if needed we can pick the odd numbers as well
    int sum2=0;
    int a=1;
    int b=1;
    int c=a+b;
    while(1)
    {
        if(c>4000000)
            break;
        sum2+=c;
        a=b+c;
        b=a+c;
        c=a+b;
    }
    cout<<sum2<<endl;
    /*
    Phi (golden ratio) is the approximate ratio between
 two consecutive terms in a Fibonacci sequence.
The ratio between consecutive even terms approaches
 phi^3 (4.236068) because each 3rd term is even.
Use a calculator and round the results to the nearest
 integer when calculating the next terms:

 2,8,34,.. multiplying by 4.236068 each time: 144,610,
 2584,10946,46368,196418 & 832040
 
 so we just do a calculation and do the sum
    */
    int sum3=0;
    int a2=2;
    while(1)
    {
        if(a2>4000000)
            break;
        sum3+=a2;
        a2=round((a2*4.236068));
    }
    cout<<sum3<<endl;
    return 0;
}

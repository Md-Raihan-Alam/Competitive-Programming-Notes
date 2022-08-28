#include<iostream>
#define int long long
#define endl "\n"
#define mod 1000000007
using namespace std;
int arr[3];
int I[3][3],T[3][3];
void mul(int A[3][3],int B[3][3],int dim)
{
    int res[dim][dim];
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            res[i][j]=0;
            for(int k=0;k<dim;k++)
            {
                // res[i][j]+=A[i][k]*B[k][j];
                int x=(A[i][k]*B[k][j])%mod;
                res[i][j]=(res[i][j]+x)%mod;
            }    
        }
    }
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            A[i][j]=res[i][j];
        }
    }
}
int getFib(int n)
{
    if(n<2) return arr[n];
    I[0][0]=I[1][1]=1;
    I[0][1]=I[1][0]=0;
    T[0][0]=0;
    T[0][1]=T[1][0]=T[1][1]=1;
    n--;
    //n=n-1;
    while(n)
    {
        if(n%2)
        {
            mul(I,T,2);
            n--;
        }
        else{
            mul(T,T,2);
            n/=2;
        }
    }
    int Fn=(arr[0]*I[0][0]+arr[1]*I[1][0]) % mod;
    return Fn;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>arr[0]>>arr[1]>>n;
        n++;
        cout<<getFib(n)<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
#define N 101
int arr[N][N],I[N][N];
void printArr(int arr[][N],int dim)
{
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
void mul(int A[][N],int B[][N],int dim)
{
    int res[dim+1][dim+1];
        for(int i=0;i<dim;i++)
            for(int j=0;j<dim;j++)
                {
                    res[i][j]=0;
                    for(int k=0;k<dim;k++)
                        res[i][j]+=A[i][k]*B[k][j];
                }
    for(int i=0;i<dim;i++)
        for(int j=0;j<dim;j++)
            A[i][j]=res[i][j];
}
void matrixExp(int arr[][N],int dim,int n)
{
    for(int i=0;i<dim;i++)
        for(int j=0;j<dim;j++)
            {
                if(i==j) I[i][j]=1;
                else    I[i][j]=0;
            }
    //Binary Exponentitation O(logN)
    while(n)
    {
        if(n%2){
            mul(I,arr,dim);
            n--;
        }
        else{
            mul(arr,arr,dim);
            n/=2;
        }
    }
    for(int i=0;i<dim;i++)
        for(int j=0;j<dim;j++)
            arr[i][j]=I[i][j];        
}
int main()
{
    int t,dim,n;
    cin>>dim>>n;
    for(int i=0;i<dim;i++)
        for(int j=0;j<dim;j++)
            cin>>arr[i][j];
    matrixExp(arr,dim,n);
    printArr(arr,dim);
    return 0;
}
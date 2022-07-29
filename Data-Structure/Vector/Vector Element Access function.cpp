#include<iostream>
#include<vector>
#include<conio.h>
int main()
{
    std::vector<int> v={1,2,3,4,5,6,7,8,9,0};
    std::cout<<"\nReference Operator[g]: v[2]="<<v[2];
    std::cout<<"\n at:v.at(4)="<<v.at(4);
    std::cout<<"\nfront():v.front()="<<v.front();
    std::cout<<"\nback():v.back()="<<v.back();
    //pointer to first element
    int *pos=v.data();
    std::cout<<"\nFirst element="<<*pos;
    getch();
}

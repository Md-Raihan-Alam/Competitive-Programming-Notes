#include<iostream>
#include<vector>
#include<conio.h>
int main()
{
    std::vector<int> g1;
    for(int i=0;i<5;i++)
        g1.push_back(i);
    /*Begin and End point to the address*/
    std::cout<<"Output of begin and end: ";
    for(auto i=g1.begin();i!=g1.end();i++)
        std::cout<<*i<<" ";
    std::cout<<"\nOutput of Rbegin and Rend:";
    /*RBegin and REnd point to the address from reverse*/
    for(auto ir=g1.rbegin();ir!=g1.rend();ir++)
        std::cout<<*ir<<" ";
    /*CBegin and CEnd CONSTANT point to the address*/
    std::cout<<"\nOutput of Cbegin and Cend:";
    for(auto ic=g1.cbegin();ic!=g1.cend();ic++)
        std::cout<<*ic<<" ";
    /*CRBegin and CREnd CONSTANT point to the address from reverse*/
    std::cout<<"\nOutput of Cbegin and Cend:";
    for(auto irc=g1.crbegin();irc!=g1.crend();irc++)
        std::cout<<*irc<<" ";
    getch();
}

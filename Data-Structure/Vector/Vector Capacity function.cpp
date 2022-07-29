#include<iostream>
#include<vector>
#include<conio.h>
int main()
{
    std::vector<int> v;
    for(int i=0;i<=5;i++)
        v.push_back(i);
    std::cout<<"Elements are: ";
    for(auto i=v.begin();i!=v.end();i++)
        std::cout<<*i<<" ";
    std::cout<<"\nSize: "<<v.size();
    std::cout<<"\nCapacity: "<<v.capacity();
    std::cout<<"\nMax_size: "<<v.max_size();
    //resizes the vector to 4
    v.resize(4);
    //prints the vector size after resize()
    std::cout<<"\nSize: "<<v.size();
    //checks if the vector is empty or no
    if(v.empty()==false)
        std::cout<<"\n Vector is not empty";
    else
        std::cout<<"\n Vector is empty";
    //Shrinks the vector
    v.shrink_to_fit();
    std::cout<<"\n Vector elements are: ";
    for(auto i=v.cbegin();i!=v.cend();i++)
        std::cout<<*i<<" ";
        v.reserve(10);
    getch();
}

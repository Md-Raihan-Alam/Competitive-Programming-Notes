#include<iostream>
#include<vector>
#include<conio.h>
int main()
{
    std::vector<int> v;
    //fill the array with 10 five times
    v.assign(5,10);//how many times,what value
    std::cout<<"The vector elements are: ";
    for(auto i=v.begin();i!=v.end();i++)
        std::cout<<*i<<" ";
    //inserts 15 to the last position
    v.push_back(15);
    int n=v.size();
    std::cout<<"\nThe last element is: "<<v[n-1];
    //remove the last element
    v.pop_back();
    std::cout<<"\n";
    //prints the vector
    for(auto i=v.begin();i!=v.end();i++)
        std::cout<<*i<<" ";
    //inserts 5 at the beginning
    v.insert(v.begin(),5);//from where, what value
    std::cout<<"\nThe fist element is:"<<v[0];
    //removes the first element
    v.erase(v.begin());
    std::cout<<"\nThe fist element is:"<<v[0];
    //inserts at the beginning
    v.emplace(v.begin(),25);
    std::cout<<"\nThe fist element is:"<<v[0];
    //Inserts 20 at the end
    v.emplace_back(20);
    n=v.size();
    std::cout<<"\nThe last element is:"<<v[n-1];
    // erases the vector
    v.clear();
    std::cout << "\nVector size after erase(): " << v.size();
    // two vector to perform swap
    std::vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    std::cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        std::cout << v1[i] << " ";

    std::cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        std::cout << v2[i] << " ";
  //swaps v1 and v2
  v1.swap(v2);
  std::cout<<"\nAfter Swap \n Vector 1: ";
  for(int i=0;i<v1.size();i++)
    std::cout<<v1[i]<<" ";
  std::cout<<"\n Vector 2: ";
  for(int i=0;i<v2.size();i++)
    std::cout<<v2[i]<<" ";
  getch();
}

#include<iostream>
#include<vector>
#include<conio.h>
int main()
{
	std::vector<int> data={1,2,3};
	data.push_back(12);//enter value in data
	std::cout<<data[data.size()-1]<<std::endl;//last value
	std::cout<<data.size()<<std::endl;//total size
	data.pop_back();//take out last value
	std::cout<<data.size()<<std::endl;
	getch();
}

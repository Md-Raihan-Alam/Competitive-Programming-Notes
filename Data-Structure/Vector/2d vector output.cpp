#include<iostream>
#include<vector>
int main()
{
    std::vector<std::vector<int>> num={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(int i=0;i<num.size();i++){
        for(int j=0;j<num[i].size();j++){
            std::cout<<num[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}

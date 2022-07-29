#include<iostream>
#include<vector>
int main()
{
    /**
    In the case of a normal vector we initialize it as:

    1. vector<datatype> variable_name

    Now in the case of a 2D vector all we do is create
    a vector of datatype vector.

    We simply replace "datatype" with "vector<int>":

    1. vector<vector<int>> variable_name

    That's literally it! We just created a 2D vector!
    below we declare an actual 2D vector
    named "vect".
    **/
    std::vector<std::vector<int>> num;
    return 0;
}

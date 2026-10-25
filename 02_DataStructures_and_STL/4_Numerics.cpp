/*
    #include <numeric> is a C++ header file that provides functions for performing 
    mathematical operations on ranges of elements, such as arrays and vectors.
*/

/*
    In C++, a container is an object that stores and organizes a collection of elements.
    Think of it like a box that holds multiple values instead of storing each value in a separate variable.
    Examples of containers std::vector — Dynamic array
*/
#include <list>
#include <numeric>
#include <iostream>
#include <vector>

int main()
{
    std::list<int> nums = {1,1,3,4};
    std::vector<int> pages(5);
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {4, 5, 6};
    
    //Accumulate : Add elements of iterators
    int sum = std::accumulate(nums.begin(),nums.end(),0);
    std::cout << sum << std::endl;
    //Iota : Fill
    std::iota(pages.begin(), pages.end(), 1);
    for (int page : pages)
    std::cout << page << std::endl;
    //inner_product :Dot product
    int result = std::inner_product(a.begin(), a.end(), b.begin(), 0);
    // Result: 32 (1*4 + 2*5 + 3*6)
    std::cout << result << std::endl;
    return 0;
}

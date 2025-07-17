#include "LeetCode.h"
#include <iostream>

void iterate_arr_with_pointer(int arr[], size_t arrSize)
{
    int* left = arr;
    int* right = (arr + arrSize - 1);
    int index = 0;
    while (index < arrSize/2 + 1)
    {
        std::cout << *left << "-" << *right << std::endl;
        left++;
        right--;
        index++;
    }
}

void test_iterate_arr_with_pointer()
{
    size_t arrSize = 10;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    iterate_arr_with_pointer(arr, arrSize);
}
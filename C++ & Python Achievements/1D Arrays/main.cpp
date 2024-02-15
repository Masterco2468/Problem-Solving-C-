#include <iostream>

using namespace std;

//This program outputs same numbers once even if repeated with keeping
//            the order of numbers.

int main()
{
    int num, nums[500] = {0}, repeats[500] = {0}, num_index = 0;

    //This is the number of numbers to enter.
    cin>> num;

    for(int i = 0; i < num; ++i)
    {
        cin>> nums[i];
        repeats[nums[i]]++;
    }

    for(int i = 0; i < 500; ++i)
    {
        if(repeats[nums[i]] >= 1)
        {
            cout<< nums[i] << " ";
            repeats[nums[i]] = 0;
        }
    }
}

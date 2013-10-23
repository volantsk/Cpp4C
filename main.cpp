// Homework 1
// C++ Program Converted from C

#include <iostream>  // using C++ io
#include <vector>    // including vector

const int N = 40;    // N will be the lenght of our vector

using namespace std;

template <class Titerator>
inline void initialize (Titerator first, Titerator last)
{
    int value = 0;

    while (first != last)
    {
        *first = value++;
        ++first; // forward position of vector
    }
}

template <class Titerator>
inline int sum (Titerator first, Titerator last)
{
    int result = 0;

    while (first != last)
    {
        result += *first; // sum the actual value in result
        ++first;          // forward position of vector
    }

    return result;
}

int main(void)
{
    vector<int> data(N);        // declares a vector data with lenght N

    // initializing the vector data
    initialize(data.begin(), data.end());

    cout << "sum is "
         << sum(data.begin(), data.end())   // returns the sum of all the values in the vector data
         << endl;

   return 0;
}


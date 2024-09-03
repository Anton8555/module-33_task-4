#include <iostream>

// maximum array size
const int N = 8;

/*!
 @brief A template routine for entering array elements.
 @param array[N] an array that needs to be filled with data elements.
*/
template < typename T >
void input(T array[N])
{
    std::cout << "Fill the array (" << N << "): ";
    for (int i = 0; i < N; ++i)
    {
        // entering individual elements
        std::cin >> array[i];
    }
}

/*!
 @brief A template function for calculating the average value of array elements.
 @param array[N] the original array.
 @return Returns the average value among the array elements.
*/
template < typename T >
double arithmetic_average(T array[N])
{
    // zeroing the amount
    double sum = 0;

    // summation of elements
    for (int i = 0; i < N; ++i)
    {
        sum += array[i];    
    }

    // calculate the average value and return as a result
    return sum / N;
}



int main()
{
    int array1[N];
    double array2[N];

    // a test with elements of the whole type
    std::cout << "\nInteger.\n";
    input(array1);
    std::cout << "The arithmetic mean of the array is 1: " << arithmetic_average(array1) << std::endl;

    // a test with real-type elements
    std::cout << "\nDouble.\n";
    input(array2);
    std::cout << "The arithmetic mean of the array is 2: " << arithmetic_average(array2) << std::endl;

    // output of the program shutdown message
    std::cout
        << "\n----------------------------------------------------------\n"
        << "End of program.\n";
    return 0;
}

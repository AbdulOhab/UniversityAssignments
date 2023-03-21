// a function for performing any
// specific task. For example, we can
// find product of elements between
// first and last.
#include <iostream>
#include <numeric>
using namespace std;

// User defined function
int myfun(int x, int y)
{
    // for this example we have taken product
    // of adjacent numbers
    return x * y ;
}

int main()
{
    // Initialize sum = 1
    int sum = 1;
    int a[] = {5 , 10 , 15} ;

    // Simple default accumulate function
    cout << "\nResult using accumulate: ";
    cout << accumulate(a , a+3 , sum);

    // Using accumulate function with
    // defined function
    cout << "\nResult using accumulate with"
             "user-defined function: ";
    cout << accumulate(a, a+3, sum, myfun);

    // Using accumulate function with
    // pre-defined function
    cout << "\nResult using accumulate with "
            "pre-defined function: ";
    cout << accumulate(a, a+3, 1, std::minus<int>());///minus subtracting its second argument from its first argument
    cout<<"\nplus";
    cout << accumulate(a, a+3, 1, std::plus<int>()); //result of adding its two arguments
    cout<<"\nmultiplies";
    cout << accumulate(a, a+3, sum, std::multiplies<int>()); //result of multiplies its two arguments
    cout<<"\ndivides";
    cout << accumulate(a, a+3, sum, std::divides<int>()); //result of divides its two arguments
    cout<<"\nmodulus";
    cout << accumulate(a, a+3, sum, std::modulus<int>()); //result of mudulus its two arguments
    cout<<"\nnegate";
    int numbers[]={10,-20,30,-40,50};
    std::transform (numbers, numbers+5, numbers, std::negate<int>());
    for (int i=0; i<5; i++)
    std::cout << numbers[i] << ' ';
    std::cout << '\n';


    return 0;
}
//result
// Result using accumulate: 31
// Result using accumulate with user-defined function: 750
// Result using accumulate with pre-defined function: -2

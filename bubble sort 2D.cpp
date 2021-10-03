#include <iostream>
#include <iomanip>
#include <utility>

int main()
{
    const size_t N = 4;

    double a[][N] =
    {
                     {1001,06,11,1999},
                     {1002,21,9,2000},
                     {1003,17,01,2001},
                     {1004,03,05,1999},
                     {1005,21,9,2000},
                     {1006,12,01,2001}
    };

    // for (const auto &row : a)
    // {
    //     for (double x : row) std::cout << std::setw( 3 ) << x << ' ';
    //     std::cout << '\n';
    // }
    // std::cout << std::endl;

    //  The bubble sort
    for (size_t n = N, last = N; not (n < 2); n = last)
    {
        for (size_t i = last = 1; i < n; i++)
        {
            if (a[N - 1][i - 1] < a[N - 1][i])
            {
                for (size_t j = 0; j < N; j++)
                {
                    std::swap(a[j][i - 1], a[j][i]);
                }
                last = i;
            }
        }
    }

    for (const auto &row : a)
    {
        for (double x : row) std::cout << std::setw( 3 ) << x << ' ';
        std::cout << '\n';
    }
    std::cout << std::endl;

    return 0;
}

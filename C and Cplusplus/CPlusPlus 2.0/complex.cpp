//complex
#include "complex.h"
#include "iostream"

int main() {
	std::complex<double> x(10.0, 2.0);

    std::cout << "Real: " << real(x)<< std::endl;
    std::cout << "Image: " << imag(x) << std::endl;
    std::cout << "The absolute value of " << x << " is: ";
    std::cout << abs(x) << std::endl;
    std::cout << "The argument of " <<x << " is: ";
    std::cout << arg(x) << std::endl;
    std::cout << arg(x) << std::endl;
}
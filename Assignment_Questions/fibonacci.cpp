#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;

    std::cout << "Enter the number of terms to be printed in the Fibonacci series: ";
    int terms;
    std::cin >> terms;

    // Print the first two terms
    std::cout << a << " " << b << " ";

    int c = 0;

    for (int i = 3; i <= terms; i++) // V.Imp to now start i from 3 as first 2 terms are already decided...
    {
        c = a + b;

        // Output the current term
        std::cout << c << " ";

        a = b;
        b = c;
    }

    return 0;
}

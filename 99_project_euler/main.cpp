#include "ProjectEuler.h"
#include <iostream>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ProjectEuler euler;

    euler.MultiplesOf3And5();
    euler.EvenFibonacciNumbers();
    euler.LargestPrimeFactor();
    euler.LargestPalindromeProduct();
    euler.SmallestMultiple();
    euler.SumSquareDifference();
    euler.TenThousandOnePrime();
    euler.LargestProductInSeries();

    return 0;
}

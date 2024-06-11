#ifndef PROJECT_EULER_H_
#define PROJECT_EULER_H_

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

class ProjectEuler {
public:
    void MultiplesOf3And5();
    void EvenFibonacciNumbers();
    void LargestPrimeFactor();
    void LargestPalindromeProduct();
    void SmallestMultiple();
    void SumSquareDifference();
    void TenThousandOnePrime();
    void LargestProductInSeries();
    void SpecialPythagoreanTriplet();
    void SummationOfPrimes();
    void LargestProductInGrid();
    void HighlyDivisibleTriangularNumber();
    void LargeSum();
    void LongestCollatzSequence();
    void LatticePaths();
    void AmicableNumbers();
private:
    void sieveEratosthenes(int n);
    int sumFactors(int n);

    std::vector<int> primes;
};

#endif // PROJECT_EULER_H_

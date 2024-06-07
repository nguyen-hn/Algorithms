#ifndef PROJECT_EULER_H_
#define PROJECT_EULER_H_

#include <iostream>
#include <vector>

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
private:
    void sieveEratosthenes(int n);

    std::vector<int> primes;
};

#endif // PROJECT_EULER_H_

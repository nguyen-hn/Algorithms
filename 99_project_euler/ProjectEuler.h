#ifndef PROJECT_EULER_H_
#define PROJECT_EULER_H_

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <map>
#include <cmath>

class ProjectEuler {
public:
    void MultiplesOf3And5(); // 1
    void EvenFibonacciNumbers(); // 2
    void LargestPrimeFactor(); // 3
    void LargestPalindromeProduct(); // 4
    void SmallestMultiple(); // 5
    void SumSquareDifference(); // 6
    void TenThousandOnePrime(); // 7
    void LargestProductInSeries(); // 8
    void SpecialPythagoreanTriplet(); //9
    void SummationOfPrimes(); //10
    void LargestProductInGrid(); // 11
    void HighlyDivisibleTriangularNumber(); // 12
    void LargeSum(); // 13
    void LongestCollatzSequence(); // 14
    void LatticePaths(); // 15
    void PowerDigitSum(); // 16
    void NumberLetterCounts(); // 17
    void MaximumPathSumI(); // 18
    void CountingSundays(); // 19
    void FactorialDigitSum(); // 20
    void AmicableNumbers(); // 18
    void PrimePermutations(); // 19
    void DigitFactorials(); // 20
    void CircularPrimes(); // 21
    void CoinSums();
    void ConsecutivePrimeSum(); // 50
private:
    void sieveEratosthenes(int n);
    int sumFactors(int n);

    int dfs(int x, int y, std::vector<std::vector<int>> &adj, std::vector<int>& path);
    void count(std::vector<int>& arr, int target, int id, int &cnt);
    std::vector<int> primes;
};

#endif // PROJECT_EULER_H_

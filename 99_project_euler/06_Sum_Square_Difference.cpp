#include "ProjectEuler.h"

void ProjectEuler::SumSquareDifference()
{
    const long long n = 100;
    long long square_sum = (n*n*(n+1)*(n+1))/4;
    long long sum_square = (n*(n+1)*(2*n+1))/6;
    std::cout << (square_sum - sum_square) << std::endl;
}

#include "ProjectEuler.h"

void ProjectEuler::SpecialPythagoreanTriplet()
{
    for(int c = 3; c < 500; c++) {
        for(int b = 3; b < c; b++) {
            int a = 1000 - b - c;
            if (a*a + b*b == c*c) {
                std::cout << (a*b*c) << std::endl;
                break;
            }
        }
    }
}

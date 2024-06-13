#include "ProjectEuler.h"

void ProjectEuler::NumberLetterCounts()
{
    // one + two + three + four + five + six + seven + eight + nine
    int one_digits = 3 + 3 + 5 + 4 + 4 + 3 + 5 + 5 + 4;
    // ten eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen
    int two_digits_1 = 3 + 6 + 6 + 8 + 8 + 7 + 7 + 9 + 8 + 8;
    // twenty thirty forty fifty sixty seventy eighty ninety
    int two_digits_2 = (6 + 6 + 5 + 5 + 5 + 7 + 6 + 6)*10 + 8*one_digits;
    // one hundred and
    int three_digits_1 = 100*(3 + 7 + 3) + one_digits + two_digits_1 + two_digits_2 - 3;
    // two hundred and
    int three_digits_2 = 100*(3 + 7 + 3) + one_digits + two_digits_1 + two_digits_2 - 3;
    // three hundred and
    int three_digits_3 = 100*(5 + 7 + 3) + one_digits + two_digits_1 + two_digits_2 - 3;
    // four hundred and
    int three_digits_4 = 100*(4 + 7 + 3) + one_digits + two_digits_1 + two_digits_2 - 3;
    // five hundred and
    int three_digits_5 = 100*(4 + 7 + 3) + one_digits + two_digits_1 + two_digits_2 - 3;
    // six hundred and
    int three_digits_6 = 100*(3 + 7 + 3) + one_digits + two_digits_1 + two_digits_2 - 3;
    // seven hundred and
    int three_digits_7 = 100*(5 + 7 + 3) + one_digits + two_digits_1 + two_digits_2 - 3;
    // eight hundred and
    int three_digits_8 = 100*(5 + 7 + 3) + one_digits + two_digits_1 + two_digits_2 - 3;
    // nine hundred and
    int three_digits_9 = 100*(4 + 7 + 3) + one_digits + two_digits_1 + two_digits_2 - 3;
    int three_digits = three_digits_1 + three_digits_2 + three_digits_3 + three_digits_4
        + three_digits_5 + three_digits_6 + three_digits_7 + three_digits_8
        + three_digits_9;
    // one thousand
    int four_digit = 3 + 8;
    int total = one_digits + two_digits_1 + two_digits_2 + three_digits + four_digit;
    std::cout << total << std::endl;
}

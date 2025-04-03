#include "task 4.h"

unsigned int greatest_common_divisor(unsigned int a, unsigned int b) {
    while (b != 0) {
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

unsigned int least_common_multiple(unsigned int a, unsigned int b) {
    return (a / greatest_common_divisor(a, b)) * b;
}


Fraction add(const Fraction& f1, const Fraction& f2) {
    unsigned int lcm = least_common_multiple(f1.denominator, f2.denominator);
    int numerator = f1.numerator * (lcm / f1.denominator) + f2.numerator * (lcm / f2.denominator);
    return { numerator, static_cast<int>(lcm) };
}


Fraction subtract(const Fraction& f1, const Fraction& f2) {
    unsigned int lcm = least_common_multiple(f1.denominator, f2.denominator);
    int numerator = f1.numerator * (lcm / f1.denominator) - f2.numerator * (lcm / f2.denominator);
    return { numerator, static_cast<int>(lcm) };
}

Fraction multiply(const Fraction& f1, const Fraction& f2) {
    int numerator = f1.numerator * f2.numerator;
    int denominator = f1.denominator * f2.denominator;
    return { numerator, denominator };
}

Fraction divide(const Fraction& f1, const Fraction& f2) {
    if (f2.numerator == 0) {
        cout << "division by zero" << endl;
        return {0,1};
    }
    int numerator = f1.numerator * f2.denominator;
    int denominator = f1.denominator * f2.numerator;
    return { numerator, denominator };
}
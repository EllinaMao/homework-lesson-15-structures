#pragma once
#include <iostream>
using namespace std;

#ifndef TASK_4_H

#define TASK_4_H
//4. ������� ���������, ����������� ������� �����.�������� �������, ����������� �������� ��������, ���������, ��������� � ������� ������.
// 1
// -   ���� �����, ������� ������ �����
// 4
// ��������� ��� ������������� �����
struct Fraction {
    int numerator;   // ���������
    int denominator; // �����������
 };



// ��������� ������� ��� �������� � �������
Fraction add(const Fraction& f1, const Fraction& f2);
Fraction subtract(const Fraction& f1, const Fraction& f2);
Fraction multiply(const Fraction& f1, const Fraction& f2);
Fraction divide(const Fraction& f1, const Fraction& f2);


unsigned int least_common_multiple(unsigned int a, unsigned int b);
unsigned int greatest_common_divisor(unsigned int a, unsigned int b);

#endif // TASK_4_H
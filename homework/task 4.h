#pragma once
#include <iostream>
using namespace std;

#ifndef TASK_4_H

#define TASK_4_H
//4. Создать структуру, описывающую обычную дробь.Написать функции, реализующие операции сложения, вычитания, умножения и деления дробей.
// 1
// -   типа такой, которая просто дробь
// 4
// Структура для представления дроби
struct Fraction {
    int numerator;   // Числитель
    int denominator; // Знаменатель
 };



// Прототипы функций для операций с дробями
Fraction add(const Fraction& f1, const Fraction& f2);
Fraction subtract(const Fraction& f1, const Fraction& f2);
Fraction multiply(const Fraction& f1, const Fraction& f2);
Fraction divide(const Fraction& f1, const Fraction& f2);


unsigned int least_common_multiple(unsigned int a, unsigned int b);
unsigned int greatest_common_divisor(unsigned int a, unsigned int b);

#endif // TASK_4_H
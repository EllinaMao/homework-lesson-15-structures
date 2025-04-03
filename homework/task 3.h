#pragma once
#ifndef TASK_3_H

#define TASK_3_H

#include <iostream>
using namespace std;
//3. ������� ���������, ����������� ��������.������� ������� ��� ������ � ���� ����������(��������, ���������� ������� � ���������� ������ �������).(�� ���� StructInStruct)
//	������� �����������  void InitPerson(person & pr);


struct person {
    const int namesize = 20;
    char name [20];
    int age;
    double weight;
    double height;
    bool married;


};


void InitPerson(person& pr);

void GetName(person& pr);

void GetAge(person& pr);

void GetHeight(person& pr);

void GetWeight(person& pr);

void isMarried(person& pr);



void PrintObject(person& pr);






#endif // TASK_3_H
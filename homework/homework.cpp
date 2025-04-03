// homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "task 1.h"
#include "task 2.h"
#include "task 3.h"
#include "task 4.h"

using namespace std;
/*
1. Ñîçäàéòå ñòðóêòóðó, îïèñûâàþùóþ òî÷êó â äâóìåðíîé ñèñòåìå êîîðäèíàò (x, y). Ñ ïîìîùüþ ýòîé ñòðóêòóðû çàäàéòå äâå òî÷êè. Áóäåò ëè ïðÿìàÿ, ïðîõîäÿùàÿ ÷åðåç ýòè òî÷êè, ïàðàëëåëüíà îñè îðäèíàò èëè îñè àáñöèññ?

2. Ñîçäàòü ñòðóêòóðó, îïèñûâàþùóþ ïðÿìîóãîëüíèê. Íàïèñàòü ôóíêöèþ äëÿ îïðåäåëåíèÿ ïîïàäàíèÿ ïðîèçâîëüíîé òî÷êè â äàííûé ïðÿìîóãîëüíèê. Òî÷êà òàêæå äîëæíà îïèñûâàòüñÿ ñòðóêòóðîé.

3. Ñîçäàòü ñòðóêòóðó, îïèñûâàþùóþ ÷åëîâåêà. Ñîçäàòü ôóíêöèè äëÿ ðàáîòû ñ ýòîé ñòðóêòóðîé (íàïðèìåð, çàïîëíåíèå îáúåêòà è ðàñïå÷àòêà äàííûõ îáúåêòà).(ñì ôàéë StructInStruct)
ôóíêö³ÿ ³í³ö³àë³çàö³¿  void InitPerson(person & pr);

4. Ñîçäàòü ñòðóêòóðó, îïèñûâàþùóþ îáû÷íóþ äðîáü. Íàïèñàòü ôóíêöèè, ðåàëèçóþùèå îïåðàöèè ñëîæåíèÿ, âû÷èòàíèÿ, óìíîæåíèÿ è äåëåíèÿ äðîáåé.
*/



int main()
{
	// А что с символами
	cout << "Hello from Oleksandra" << endl;

	#ifdef TASK_1_H
//1. Ñîçäàéòå ñòðóêòóðó, îïèñûâàþùóþ òî÷êó â äâóìåðíîé ñèñòåìå êîîðäèíàò (x, y). Ñ ïîìîùüþ ýòîé ñòðóêòóðû çàäàéòå äâå òî÷êè. 
// Áóäåò ëè ïðÿìàÿ, ïðîõîäÿùàÿ ÷åðåç ýòè òî÷êè, ïàðàëëåëüíà îñè îðäèíàò èëè îñè àáñöèññ?

	Point p1 = { -3, 0 };
	Point p2 = { -3, 3 };

	bool parallel_x = isParallelToXAxis(p1, p2);

	if (parallel_x) {  
		cout << "The line Y is parallel to the X axis" << endl;  
	}  
	else {  
		cout << "The line Y is not parallel to the X axis" << endl;  
	}

	bool parallel_y = isParallelToYAxis(p1, p2);

	if (parallel_y) {
		cout << "The line X is parallel to the Y axis" << endl;
	}
	else {
		cout << "The line X is not parallel to the Y axis" << endl;
	}
 
#endif // TASK_1_H

////////////////////////////////////

#ifdef TASK_2_H

//2. Ñîçäàòü ñòðóêòóðó, îïèñûâàþùóþ ïðÿìîóãîëüíèê.Íàïèñàòü ôóíêöèþ äëÿ îïðåäåëåíèÿ ïîïàäàíèÿ ïðîèçâîëüíîé òî÷êè â äàííûé ïðÿìîóãîëüíèê.
// Òî÷êà òàêæå äîëæíà îïèñûâàòüñÿ ñòðóêòóðîé.

	Rectangle rect = { 0, 0, 10, 10 };
	Point point1 = { 5, 5 };


	bool is_in_rect = isPointInsideRectangle(rect, point1);


	if (is_in_rect) {
		cout << "The point is in the rectangle" << endl;
	}

	else {
		cout << "The point isn`t in the rectangle" << endl;
	}


#endif // TASK_2_H


#ifdef TASK_3_H

//3. Ñîçäàòü ñòðóêòóðó, îïèñûâàþùóþ ÷åëîâåêà.Ñîçäàòü ôóíêöèè äëÿ ðàáîòû ñ ýòîé ñòðóêòóðîé(íàïðèìåð, çàïîëíåíèå îáúåêòà è ðàñïå÷àòêà äàííûõ îáúåêòà).(ñì ôàéë StructInStruct)
//	ôóíêö³ÿ ³í³ö³àë³çàö³¿  void InitPerson(person & pr);

	person pr;
	cout << "Hi! lets create a person" << endl;

	InitPerson(pr);

	cout << "This is your person" << endl;
	PrintObject(pr);

	#endif // TASK_3_H



	#ifdef TASK_4_H
//4. Ñîçäàòü ñòðóêòóðó, îïèñûâàþùóþ îáû÷íóþ äðîáü.Íàïèñàòü ôóíêöèè, ðåàëèçóþùèå îïåðàöèè ñëîæåíèÿ, âû÷èòàíèÿ, óìíîæåíèÿ è äåëåíèÿ äðîáåé.
	Fraction f1 = { 3, 4 }; // 3/4
	Fraction f2 = { 2, 5 }; // 2/5

	Fraction result_add = add(f1, f2);
	cout << "Addition: " << result_add.numerator << "/" << result_add.denominator << endl;

	Fraction result_subtract = subtract(f1, f2);
	cout << "Subtraction: " << result_subtract.numerator << "/" << result_subtract.denominator << endl;

	Fraction result_multiply = multiply(f1, f2);
	cout << "Multiplication: " << result_multiply.numerator << "/" << result_multiply.denominator << endl;

	if (f2.numerator != 0) {
		Fraction result_divide = divide(f1, f2);
		cout << "Division: " << result_divide.numerator << "/" << result_divide.denominator << endl;
	}
	else {
		cout << "Division by zero error" << endl;
	}


	#endif // TASK_4_H


		return 0;

}


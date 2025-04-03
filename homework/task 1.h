#pragma once
#ifndef TASK_1_H

#define TASK_1_H

/*
1. Создайте структуру, описывающую точку в двумерной системе координат (x, y). С помощью этой структуры задайте две точки. 
Будет ли прямая, проходящая через эти точки, параллельна оси ординат или оси абсцисс?
*/


struct Point {
	int x;
	int y;
};

#define isParallelToYAxis(p1, p2) ((p1).x == (p2).x)
#define isParallelToXAxis(p1, p2) ((p1).y == (p2).y)

#endif // TASK_1_H
#pragma once
#ifndef TASK_1_H

#define TASK_1_H

/*
1. �������� ���������, ����������� ����� � ��������� ������� ��������� (x, y). � ������� ���� ��������� ������� ��� �����. 
����� �� ������, ���������� ����� ��� �����, ����������� ��� ������� ��� ��� �������?
*/


struct Point {
	int x;
	int y;
};

#define isParallelToYAxis(p1, p2) ((p1).x == (p2).x)
#define isParallelToXAxis(p1, p2) ((p1).y == (p2).y)

#endif // TASK_1_H
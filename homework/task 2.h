#pragma once
#ifndef TASK_2_H

#define TASK_2_H


//2. ������� ���������, ����������� �������������.�������� ������� ��� ����������� ��������� ������������ ����� � ������ �������������.
// ����� ����� ������ ����������� ����������.

struct Point2 {
    int x;
    int y;
};

struct Rectangle {
    int x;
    int y;
    int width;
    int height;
};

#define isPointInsideRectangle(rect, point)((point.x >= rect.x )&& (point.x <= rect.x + rect.width )&& (point.y >= rect.y) && (point.y <= rect.y + rect.height))

#endif // TASK_2_H
#pragma once
#ifndef TASK_2_H

#define TASK_2_H


//2. Создать структуру, описывающую прямоугольник.Написать функцию для определения попадания произвольной точки в данный прямоугольник.
// Точка также должна описываться структурой.

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
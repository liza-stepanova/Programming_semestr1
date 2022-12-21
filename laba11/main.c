#include <stdio.h>
#include "11_2.h"

int main() {
    int ax, ay, bx, by, cx, cy;
    printf("Введите координаты прямоугольного треугольника: ");
    scanf("%f %f %f %f %f %f", &ax, &ay, &bx, &by, &cx, &cy);
    struct rectangle *rect = {ax, ay, bx, by, cx, cy};

    printf("Периметр: %f\n", P(&rect));
    printf("Площадь: %f\n", S(&rect));
}
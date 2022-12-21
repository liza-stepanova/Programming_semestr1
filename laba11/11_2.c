#include "11_2.h"
#include <math.h>

float side(struct coordinate *dot1, struct coordinate *dot2){
//  вычисление стороны
    return sqrt(pow(dot1->x - dot2->x, 2) + pow(dot1->y - dot2->y, 2));
}

float P(struct coordinate *dot1, struct coordinate *dot2, struct coordinate *dot3) {
//  вычисляем длину каждой стороны и складываем
    return side(dot1, dot2) + side(dot2, dot3) + side(dot3, dot1);
}

float S(struct coordinate *dot1, struct coordinate *dot2, struct coordinate *dot3) {
    int poluperimetr = P(dot1, dot2, dot3) / 2;
//  по формуле Герона вычисляем площадь треугольника
    return sqrt(poluperimetr *
                (poluperimetr - side(dot1, dot2)) *
                (poluperimetr - side(dot2, dot3)) *
                (poluperimetr - side(dot3, dot1)));
}
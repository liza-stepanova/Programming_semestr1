#include "11_2.h"
#include <math.h>

float P(struct coordinate dot1, struct coordinate dot2, struct coordinate dot3) {
//  вычисляем длину каждой стороны и складываем
    return sqrt(pow(dot1.x - dot2.x, 2) + pow(dot1.y - dot2.y, 2))
           + sqrt(pow(dot2.x - dot3.x, 2) + pow(dot2.y - dot3.y, 2))
           + sqrt(pow(dot3.x - dot1.x, 2) + pow(dot3.y - dot1.y, 2));
}

float S(struct coordinate dot1, struct coordinate dot2, struct coordinate dot3) {
    int poluperimetr = P(dot1, dot2, dot3) / 2;
//  по формуле Герона вычисляем площадь треугольника
    return sqrt(poluperimetr *
                (poluperimetr - (sqrt(pow(dot1.x - dot2.x, 2) + pow(dot1.y - dot2.y, 2)))) *
                (poluperimetr - (sqrt(pow(dot2.x - dot3.x, 2) + pow(dot2.y - dot3.y, 2)))) *
                (poluperimetr - (sqrt(pow(dot3.x - dot1.x, 2) + pow(dot3.y - dot1.y, 2)))));
}
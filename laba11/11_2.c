#include "11_2.h"
#include <math.h>

float a(struct Rect *rect){
    return sqrt(pow(rect->ax - rect->bx, 2) + pow(rect->ay - rect->by, 2));
}
float b(struct Rect *rect){
    return sqrt(pow(rect->bx - rect->cx, 2) + pow(rect->by - rect->cy, 2));
}
float c(struct Rect *rect){
    return sqrt(pow(rect->cx - rect->ax, 2) + pow(rect->cy - rect->ay, 2));
}

float P(struct Rect *rect) {
//  вычисляем длину каждой стороны и складываем
    return a(rect) + b(rect) + c(rect);
}

float S(struct Rect *rect) {
    int poluperimetr = P(rect) / 2;
//  по формуле Герона вычисляем площадь треугольника
    return sqrt(poluperimetr *
                (poluperimetr - a(rect)) *
                (poluperimetr - b(rect)) *
                (poluperimetr - c(rect)));
}
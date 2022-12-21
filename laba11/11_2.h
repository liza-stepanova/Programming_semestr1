#ifndef triangle
#define triangle

struct Rect {
    float ax, ay, bx, by, cx, cy;
};

float P(struct Rect *rect);

float S(struct Rect *rect);

#endif
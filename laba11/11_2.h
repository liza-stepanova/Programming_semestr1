#ifndef triangle
#define triangle

struct coordinate {
    float x;
    float y;
};

float P(struct coordinate *dot1, struct coordinate *dot2, struct coordinate *dot3);

float S(struct coordinate *dot1, struct coordinate *dot2, struct coordinate *dot3);

#endif
#ifndef triangle
#define triangle

struct coordinate {
    float x;
    float y;
};

float P(struct coordinate, struct coordinate, struct coordinate);

float S(struct coordinate, struct coordinate, struct coordinate);

#endif
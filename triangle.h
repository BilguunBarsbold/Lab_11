#ifndef _triangle_
#define _triangle_
#include "shape2D.h"
using namespace std;

class triangle : public shape2D{
    public:
        float area();
        float perimeter();
        void set_coord(float a, float b);
        void show_data();

        triangle();
        triangle(float a);
        ~triangle();
};
#endif
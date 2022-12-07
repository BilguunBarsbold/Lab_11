#ifndef _circle_
#define _circle_
#include "shape2D.h"
using namespace std;

class circle : public shape2D{
    public:
        float area();
        float perimeter();
        void set_coord(float a, float b);
        void show_data();

        circle();
        circle(float a);
        ~circle();
};
#endif
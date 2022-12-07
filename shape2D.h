#ifndef _shape2D_
#define _shape2D_
#include "shape.h"
#include <iostream>
using namespace std;

class shape2D : public shape{
    friend ostream & operator << (ostream &out, const shape2D &tmp);
    protected:
        char* name;
        float *x;
        float *y;
    public:
        virtual float area() = 0;
        virtual float perimeter() = 0;
        virtual void set_coord(float a, float b) = 0;
        virtual void show_data() = 0;

        bool operator<(shape2D &tmp);
        bool operator>(shape2D &tmp);

        shape2D();
        shape2D(float a, int pnts, const char* _name);
        ~shape2D();
};
#endif
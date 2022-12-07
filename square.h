#ifndef _square_
#define _square_
#include "shape2D.h"
using namespace std;

class square : public shape2D{
    public:
        float area();
        float perimeter();
        void set_coord(float a, float b);
        void show_data();

        square();
        square(float a);
        ~square();
};
#endif
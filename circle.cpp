#include<iostream>
#include"circle.h"
using namespace std;

float circle::area(){
    return 3.1415*3.1415*this->length;
}
float circle::perimeter(){
    return 2*3.1415*this->length;
}

void circle::set_coord(float a, float b){
    this->x[0] = a;
    this->y[0] = b;
}
void circle::show_data(){
    cout << "------------------------------------" << endl;
    cout << "Circle     " << length << endl;
    cout << "area:      " << this->area() << endl;
    cout << "perimeter: " << this->perimeter() << endl;
    cout << "coords:    (" << this->x[0] << " " << this->y[0] << ")\n" << endl;
}

circle::circle():shape2D(1, 1, "circle"){
    Area = this->area();
    set_coord(0, 0);
    cout << "Default circle created..." << endl;
}
circle::circle(float a):shape2D(a, 1, "circle"){
    Area = this->area();
    set_coord(0, 0);
}
circle::~circle(){
    //cout << "Circle deleted..." << endl;
}
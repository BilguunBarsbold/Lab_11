#include<iostream>
#include<math.h>
#include"triangle.h"
using namespace std;

float triangle::area(){
    return this->length*this->length*cos(3.1415/6)/2;
}
float triangle::perimeter(){
    return this->length*3;
}
void triangle::set_coord(float a, float b){
    this->x[0] = a;
    this->y[0] = b;
    
    this->x[1] = this->x[0] + this->length/2;
    this->x[2] = this->x[1] - length;

    this->y[1] = this->y[0] - this->length*cos(3.1415/6);
    this->y[2] = this->y[1];
}
void triangle::show_data(){
    cout << "------------------------------------" << endl;
    cout << "Triangle   " << length << endl;
    cout << "area:      " << this->area() << endl;
    cout << "perimeter: " << this->perimeter() << endl;
    cout << "coords:    (" << this->x[0] << " " << this->y[0] << ")\n" << endl;
}

triangle::triangle():shape2D(1, 3, "triangle"){
    Area = this->area();
    set_coord(0, 0);
    cout << "Default triangle created..." << endl;
}
triangle::triangle(float a):shape2D(a, 3, "triangle"){
    Area = this->area();
    set_coord(0, 0);
}
triangle::~triangle(){
    //cout << "Triangle deleted..." << endl;
}